cmake_minimum_required(VERSION 3.0)
project(lsanitizerTest)

# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable AddressSanitizer and LeakSanitizer
# you should include -g to enable debugging information 
# and -fno-omit-frame-pointer to ensure accurate stack traces.

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address,leak -g -fno-omit-frame-pointer")

# Add your source files
add_executable(lsanitezetTest main.cc)

# Link other libraries if needed
#target_link_libraries(YourExecutable your_library)

