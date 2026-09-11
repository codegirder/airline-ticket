cmake_minimum_required(VERSION 4.4)

set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "f35a9ac6-8463-4d38-8eec-5d6008153e7d")
set(CMAKE_CXX_STDLIB_MODULES_JSON "/opt/homebrew/opt/llvm/lib/c++/libc++.modules.json")

project(airline_ticket)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_MODULE_STD ON)

add_executable(airline_ticket
        main.cpp
        AirlineTicket.cpp)

target_sources(airline_ticket
        PRIVATE
        FILE_SET CXX_MODULES FILES AirlineTicket.cppm
)

# Link against Homebrew's libc++ (the std module is built from it)
target_link_directories(airline_ticket PRIVATE /opt/homebrew/opt/llvm/lib/c++)
