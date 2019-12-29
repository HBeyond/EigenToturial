add_executable(Test "Test.cpp")

# library: boost
option(BUILD_USE_SYSTEM_BOOST "Use system boost in /usr/lib" OFF)
if (${BUILD_USE_SYSTEM_BOOST})
    message(STATUS "USE system boost in /usr/lib/")
    # boost: bypass default path for search another boost in /usr/lib
    # set(BOOST_NO_SYSTEM_PATHS FALSE)
    set(BOOST_ROOT "/usr")
    set(BOOST_INCLUDEDIR "${BOOST_ROOT}/include")
    set(BOOST_LIBRARYDIR "${BOOST_ROOT}/lib/x86_64-linux-gnu")
    find_package(Boost REQUIRED COMPONENTS filesystem date_time)
else ()
    message(STATUS "Use Boost in /usr/local")
    find_package(Boost REQUIRED COMPONENTS filesystem date_time)
endif ()
if (NOT Boost_FOUND)
    message(FATAL_ERROR "Cannot Found Boost")
endif ()
message(STATUS "Boost headers: ${Boost_INCLUDE_DIR}")
message(STATUS "Boost libs: ${Boost_LIBRARIES}")

# library: Eigen3
find_package(Eigen3 REQUIRED)

include_directories(Test ${EIGEN3_INCLUDE_DIRS})

#target_link_libraries(Test ${EIGEN3_LIBRARIES})
target_link_libraries(Test gflags glog)
