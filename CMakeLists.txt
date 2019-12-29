cmake_minimum_required(VERSION 2.8)
add_compile_options(-std=c++11)

project(Eigen_Toturial)

# libraries
find_package(Eigen3 REQUIRED)                           # Eigen

include_directories(${EIGEN3_INCLUDE_DIR})

# include folder
include_directories(./include)

# Example
add_subdirectory(example)

# header and source files
file(GLOB_RECURSE FILE_INCLUDES "./include/*.*")
file(GLOB_RECURSE FILE_SRCS "./src/*.*")

# build the library
add_library(${PROJECT_NAME} SHARED ${FILE_INCLUDES} ${FILE_SRCS})
