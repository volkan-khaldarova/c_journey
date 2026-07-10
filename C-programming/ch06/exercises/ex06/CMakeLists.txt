# Specify the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Name of the project and the language used
project(EX06Project C)

# Set the C standard to C99 strictly (-std=c99 and -pedantic)
set(CMAKE_C_STANDARTD 99)
set(CMAKE_C_STANDARTD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Add the executable target
add_executable(ex06 ex06.c)

# Apply your specific GCC flags (-pedantic -Wall -Werror -O)
target_compile_options(ex06 PRIVATE -pedantic -Wall -Werror -Wextra -O)
