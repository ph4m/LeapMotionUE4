cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(LeapMotionUE4)

#GENERATE_EXPORT_HEADER( DepthSenseGrabberCore
#             BASE_NAME DepthSenseGrabberCore
#             EXPORT_MACRO_NAME DepthSenseGrabberCore_EXPORT
#             EXPORT_FILE_NAME DepthSenseGrabberCore_Export.h
#             STATIC_DEFINE DepthSenseGrabberCore_BUILT_AS_STATIC
#)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
find_package(Leap REQUIRED)

include_directories(${LEAP_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR}/include)

set (LeapMotionUE4_SOURCE
    src/LeapMotionUE4.cpp
    src/LeapMotionUE4.h
)

add_library (LeapMotionUE4 SHARED
	${LeapMotionUE4_SOURCE})

target_link_libraries (LeapMotionUE4 ${LEAP_LIBRARIES})

add_executable (LeapVisualizerPrint
    src/LeapVisualizerPrint.cpp
    src/LeapMotionUE4.h
)
target_link_libraries (LeapVisualizerPrint LeapMotionUE4)
