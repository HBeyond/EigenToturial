#Example

# The first example in Eigen toturial
add_executable(HelloEigen ./HelloEigen.cpp)
add_dependencies(HelloEigen Eigen_Toturial)
target_link_libraries(HelloEigen Eigen_Toturial)
