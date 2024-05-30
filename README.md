# Setup Guide

**Note:** This code was tested on Ubuntu 22.04. Compatibility with other platforms/versions is not guaranteed.

## Install Dependencies

### gRPC for C++
Install by following the instructions on this website: [gRPC C++ Quickstart](https://grpc.io/docs/languages/cpp/quickstart/)

> **Recommendation:** As stated in the website, it is recommended to choose a different installation path other than the .local directory as it would make it much easier to remove later.

### jsoncpp
Install this library on Linux with the command:
```bash
sudo apt install libjsoncpp-dev
```
## Model File

There needs to be a model file named `model_scripted.pt.` This cannot be uploaded to GitHub due to its size. You can request this file by opening an issue on the GitHub page.

## Compilation

In `model_receiver.cc`, there are 4 IP addresses. You need to change these to the IP addresses of the Raspberry Pi's running the `receiver` program. Then compile with:
```bash
make -j 4
bash compile.sh
```

This command will probably not work because you need to regenerate the CMake files. To do so:
1. Delete the contents of the build directory except for `receiver.cc`, `main.cpp`, and `compile.sh`.
2. Inside the `build` directory, run:
```bash
cmake -DCMAKE_PREFIX_PATH=$MY_INSTALL_DIR ../..
```
Replace `$MY_INSTALL_DIR` with the name of the environment variable that holds the path to the gRPC installation on your computer.

After running the above command, run the previous two commands again:
```bash
make -j 4
bash compile.sh
```

## Running the program

Make sure all the devices with the IP addresses in the code are running the `receiver` program. Then run the program via the command:
```bash
./model_receiver
```
