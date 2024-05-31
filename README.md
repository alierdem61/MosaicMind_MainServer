# Setup Guide

**Note:** This code was tested on Ubuntu 22.04. Compatibility with other platforms/versions is not guaranteed.

**Note:** To be able to receive/send data from/to the Raspberry Pi's, they need to be connected to the same network.

## Install Dependencies

### gRPC for C++
Install by following the instructions on this website: [gRPC C++ Quickstart](https://grpc.io/docs/languages/cpp/quickstart/)

> **Recommendation:** As stated in the website, it is recommended to choose a different installation path other than the .local directory as it would make it much easier to remove later.

### jsoncpp
Install this library on Linux with the command:
```bash
sudo apt install libjsoncpp-dev
```

### LibTorch
If you are using a different architecture than x86-64, you will need to compile `main.cpp`. To do that, you will need to install the LibTorch API for C++.
You can download for Linux by [clicking this link](https://download.pytorch.org/libtorch/cpu/libtorch-cxx11-abi-shared-with-deps-2.3.0%2Bcpu.zip).
Then you need to adjust the `compile.sh` file. Change every instance of `/home/alierdem/` to where the LibTorch installation is located on your computer.
Then, run:
```bash
bash compile.sh
```
If you get any, compilation errors will be output to a file named `err.txt`.

## Model File

There needs to be a model file named `model_scripted.pt.` This cannot be uploaded to GitHub due to its size. You can request this file by opening an issue on the GitHub page.

## Compilation

In `model_receiver.cc`, there are 4 IP addresses (at line 184 in the `std::vector` named `addresses`). You need to change these to the IP addresses of the Raspberry Pi's running the `receiver` program. Then inside `cmake/build`, compile with:
```bash
make -j 4
```
**Note:** If you are using a different architecture than x86-64, you also need to run `bash compile.sh` after [installing LibTorch](#libtorch). 

This command will probably not work because you need to regenerate the CMake files. To do so:
1. Delete the contents of the build directory EXCEPT FOR `model_receiver.cc`, `main.cpp`, and `compile.sh`.
2. Inside the `build` directory, run:
```bash
cmake -DCMAKE_PREFIX_PATH=$MY_INSTALL_DIR ../..
```
Replace `$MY_INSTALL_DIR` with the name of the environment variable that holds the path to the gRPC installation on your computer.

After running the above command, run the previous two commands again:
```bash
make -j 4
```
**Note:** If you are using a different architecture than x86-64, you also need to run `bash compile.sh` after [installing LibTorch](#libtorch). 

## Running the program

Make sure all the devices with the IP addresses in the code are running the `receiver` program. Then run the program via the command:
```bash
./model_receiver
```

The `model_receiver` program will run the `main` program automatically when the time comes. The `model_receiver` program is in charge of receiving and saving the models from the Raspberrys, 
and the `main` program is in charge of the federated learning part (it also prints some info about the model weights and generates some text files too).
