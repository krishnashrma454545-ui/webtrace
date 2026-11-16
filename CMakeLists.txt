cmake_minimum_required(VERSION 3.20)

project(WebTrace LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Vulkan REQUIRED)


add_subdirectory(src)
