#include <algorithm>
#include <chrono>
#include <cmath>
#include <iostream>
#include <memory>
#include <string>
#include <fstream>
#include <thread>
#include <jsoncpp/json/json.h>

#include <grpc/grpc.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/security/server_credentials.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>
#include <google/protobuf/empty.pb.h>
#include "test.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerReader;
using grpc::ServerWriter;
using grpc::Status;
using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::ClientWriter;
using grpc::ClientReaderWriter;
using grpc::CreateChannel;
using grpc::InsecureChannelCredentials;
using mosaic::ImageAndTextRequest;
using mosaic::TextResponse;
using mosaic::Mosaic;
using mosaic::ModelChunk;
using mosaic::IntValue;
using google::protobuf::Empty;

class MosaicClient {
public:
    MosaicClient(std::shared_ptr<Channel> channel)
        : stub_(Mosaic::NewStub(channel)) {}

    int ReceiveIntValue() {
        Empty request;
        IntValue response;
        ClientContext context;
        
        Status status = stub_->SendIntValue(&context, request, &response);
        
        if (status.ok()) {
            return response.value();
        } else {
            std::cout << "Failed to receive integer value: " << status.error_message() << std::endl;
            return -1;
        }
    }

    std::string ReceiveModel(const std::string& output_filename) {
        Empty request;
        ClientContext context;
        std::unique_ptr<grpc::ClientReader<ModelChunk>> reader(stub_->SendModelStream(&context, request));
        
        std::ofstream output_file(output_filename, std::ios::binary);
        ModelChunk chunk;
        while (reader->Read(&chunk)) {
            output_file.write(chunk.chunk_data().data(), chunk.chunk_data().size());
        }

        Status status = reader->Finish();
        if (status.ok()) {
            return output_filename;
        } else {
            std::cerr << "Failed to receive model: " << status.error_message() << std::endl;
            return "";
        }
    }

    void SendModel(const std::string& file_path) {
        ClientContext context;
        Empty response;
        std::unique_ptr<grpc::ClientWriter<ModelChunk>> writer(stub_->ReceiveModelStream(&context, &response));
        
        std::ifstream model_file(file_path, std::ios::binary);
        if (!model_file.is_open()) {
            std::cerr << "Failed to open model file." << std::endl;
            return;
        }

        const size_t buffer_size = 1024 * 1024;
        char buffer[buffer_size];
        while (model_file.read(buffer, buffer_size)) {
            ModelChunk chunk;
            chunk.set_chunk_data(buffer, buffer_size);
            writer->Write(chunk);
        }

        // Handle the last partial buffer
        if (model_file.gcount() > 0) {
            ModelChunk chunk;
            chunk.set_chunk_data(buffer, model_file.gcount());
            writer->Write(chunk);
        }

        model_file.close();
        writer->WritesDone();
        Status status = writer->Finish();
        if (!status.ok()) {
            std::cerr << "Failed to send model: " << status.error_message() << std::endl;
        }
    }

private:
    std::unique_ptr<Mosaic::Stub> stub_;
};

class MosaicImpl final : public Mosaic::Service {
public:
    Status SendModelStream(ServerContext* context, const Empty* request, grpc::ServerWriter<ModelChunk>* writer) override {
        std::ifstream model_file("model_scripted.pt", std::ios::binary);
        if (!model_file.is_open()) {
            return Status(grpc::INTERNAL, "Failed to open model file.");
        }

        const size_t buffer_size = 1024 * 1024;
        char buffer[buffer_size];
        while (model_file.read(buffer, buffer_size)) {
            ModelChunk chunk;
            chunk.set_chunk_data(buffer, buffer_size);
            writer->Write(chunk);
        }

        // Handle the last partial buffer
        if (model_file.gcount() > 0) {
            ModelChunk chunk;
            chunk.set_chunk_data(buffer, model_file.gcount());
            writer->Write(chunk);
        }

        model_file.close();
        return Status::OK;
    }

    Status SendIntValue(ServerContext* context, const Empty* request, IntValue* response) override {
        response->set_value(10); // example integer value
        return Status::OK;
    }

    Status ReceiveModelStream(ServerContext* context, grpc::ServerReader<ModelChunk>* reader, Empty* response) override {
        std::ofstream model_file("received_model.pt", std::ios::binary);
        if (!model_file.is_open()) {
            return Status(grpc::INTERNAL, "Failed to open model file for writing.");
        }

        ModelChunk chunk;
        while (reader->Read(&chunk)) {
            model_file.write(chunk.chunk_data().data(), chunk.chunk_data().size());
        }

        model_file.close();
        return Status::OK;
    }
};

void GenerateJson(const std::vector<int>& model_counts, const std::vector<std::string>& model_paths, const std::string& base_model_path) {
    Json::Value jsonData;
    for (size_t i = 0; i < model_paths.size(); ++i) {
        jsonData["model" + std::to_string(i+1)] = model_paths[i];
        jsonData["model" + std::to_string(i+1) + "_num"] = model_counts[i];
    }
    jsonData["base_model"] = base_model_path;

    std::ofstream json_file("output.json", std::ios::out);
    json_file << jsonData.toStyledString();
}

void RequestModelAndInteger() {
    std::vector<int> model_counts;
    std::vector<std::string> model_paths = {
        "model1.pt", "model2.pt", "model3.pt", "model4.pt"
    };
    const std::string base_model_path = "model_scripted.pt";
    std::vector<std::string> addresses = {
        // "192.168.137.249:8080", // alierdem
        // "192.168.137.231:8080", // batuhan
        // "192.168.137.213:8080", // yunus
        // "192.168.137.29:8080" // tugay
        // "192.168.1.108:8080", // alierdem
        // "192.168.1.110:8080", // batuhan
        // "192.168.1.114:8080", // yunus
        // "192.168.1.107:8080" // tugay
        "192.168.137.50:8080",
        "192.168.137.222:8080",
        "192.168.137.26:8080",
        "192.168.137.46:8080"
  // String ipA1 = '192.168.137.26'; //batuhan
  // String ipA2 = '192.168.137.50'; //yunus
  // String ipA3 = '192.168.137.46'; //ali erdem
  // String ipA4 = '192.168.137.222'; //tugay
    };

    for (int i = 0; i < 4; ++i) {
        std::string address = addresses[i];
        MosaicClient client(grpc::CreateChannel(address, grpc::InsecureChannelCredentials()));

        int integer_value = client.ReceiveIntValue();
        std::cout << "Received integer: " << integer_value << std::endl;
        model_counts.push_back(integer_value);

        std::string model_path = client.ReceiveModel(model_paths[i]);
        if (!model_path.empty()) {
            std::cout << "Model saved to: " << model_path << std::endl;
        }
    }

    GenerateJson(model_counts, model_paths, base_model_path);

    std::string command = "./main \"output.json\"";
    // std::string command = "./testing";
    FILE* pipe = popen(command.c_str(), "r");
    if (!pipe) {
        std::cout << "Error running base model generator." << std::endl;
    } else {
        char buffer[128];
        while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
            std::cout << buffer;
        }
        pclose(pipe);
    }

    for (int i = 0; i < 4; ++i) {
        std::string address = addresses[i];
        MosaicClient client(grpc::CreateChannel(address, grpc::InsecureChannelCredentials()));
        // std::string model_name = "model" + std::to_string(i + 1) + ".pt";
        std::string model_name = "model_scripted.pt";
        client.SendModel(model_name);
        std::cout << "Sent model " << i << std::endl;
    }
    std::cout << "Sent new model to all Raspberry Pi's" << std::endl;
    // Send the model back
    // MosaicClient client(grpc::CreateChannel("192.168.249.30:8080", grpc::InsecureChannelCredentials()));
    // client.SendModel("model_to_send.pt");
}

void RunServer(const std::string& server_address) {
    MosaicImpl service;
    ServerBuilder builder;

    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<Server> server(builder.BuildAndStart());

    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
}

int main() {
    std::thread server_thread(RunServer, "0.0.0.0:8085");

    // Give the server some time to start
    std::this_thread::sleep_for(std::chrono::seconds(1));


    // RequestModelAndInteger();
    while (1) {
        RequestModelAndInteger();
        std::cout << "Waiting for 5 minutes...\n";
        std::this_thread::sleep_for(std::chrono::minutes(5));
        std::cout << "Time is up. Requesting models...\n";
    }

    server_thread.join();
    return 0;
}

