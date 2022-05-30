cmake_minimum_required(VERSION 3.15.0)
project(${PROJECT_NAME} VERSION 0.1.0)

SET( BINARY ${CMAKE_PROJECT_NAME} )

include(CTest)
enable_testing()

SET (SRC_FILES
	main.cpp
	graph.cpp
    )

ADD_EXECUTABLE(${BINARY}  ${SRC_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)