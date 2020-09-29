#--------------------------------------------------------------------------
# not gscept laboration environment
#--------------------------------------------------------------------------
PROJECT(processinfo)
CMAKE_MINIMUM_REQUIRED(VERSION 3.2)


IF(CMAKE_COMPILER_IS_GNUCXX)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -no-pie -pthread")
ENDIF()

SET(PROCESSINFO_ROOT ${CMAKE_CURRENT_DIR})

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

#FILE(GLOB processinfo_headers *.h *.jpg)
FILE(GLOB processinfo_sources *.cpp)

SET(files_processinfo ${processinfo_sources})
SOURCE_GROUP("processinfo" FILES ${files_processinfo})

ADD_EXECUTABLE(processinfo ${files_processinfo})

