# C++ Project

## Overview
This project is a simple C++ application that demonstrates the use of CMake as a build system. It includes a main application file and utility functions organized in separate source and header files.

## Project Structure
```
cpp-project
├── src
│   ├── main.cpp
│   └── utils
│       └── helper.cpp
├── include
│   └── utils
│       └── helper.h
├── CMakeLists.txt
└── README.md
```

## Building the Project
To build the project, follow these steps:

1. Ensure you have CMake installed on your system.
2. Open a terminal and navigate to the project directory.
3. Create a build directory:
   ```
   mkdir build
   cd build
   ```
4. Run CMake to configure the project:
   ```
   cmake ..
   ```
5. Build the project:
   ```
   cmake --build .
   ```

## Running the Application
After building the project, you can run the application by executing the generated binary in the build directory.

## Contributing
Feel free to contribute to this project by submitting issues or pull requests.