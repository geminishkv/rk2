cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_EXE ${CMAKE_CURRENT_SOURCE_DIR}/source/main.cpp)
set(SOURCE_LIB ${CMAKE_CURRENT_SOURCE_DIR}/source/demo.cpp)

option(BUILD_TESTS "Build tests" OFF)

project(demo)

add_library(demo STATIC ${SOURCE_LIB})
add_executable(demo_main ${SOURCE_EXE})

target_include_directories(demo PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

target_link_libraries(demo_main demo)

install(TARGETS demo
    EXPORT demo-config
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
)
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/ DESTINATION include)
install(EXPORT demo-config DESTINATION cmake)


if(BUILD_TESTS)
  enable_testing()
  file(GLOB ${PROJECT_NAME}_TEST_SOURCES test/*.cpp) 
  add_executable(check ${${PROJECT_NAME}_TEST_SOURCES})
  target_link_libraries(check ${PROJECT_NAME} ${DEPENDS_LIBRARIES})
  add_test(NAME check COMMAND check "-s" "-r" "compact" "--use-colour" "yes")
endif()

include(CPackConfig.cmake)
