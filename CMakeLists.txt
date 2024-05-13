cmake_minimum_required(VERSION 3.0)
project(allip)

# Find the cURL package
find_package(CURL REQUIRED)

# Add the executable target
add_executable(allip src/main.cc)

# Link the cURL library to the executable target
target_link_libraries(allip CURL::libcurl)
