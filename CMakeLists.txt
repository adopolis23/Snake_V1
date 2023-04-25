cmake_minimum_required(VERSION 3.26.3)

project(Snake)



add_library(base
  src/Components/*.cpp
  src/Components/*.h
)
target_include_directories(base PUBLIC include)





add_executable(${PROJETC_NAME} src/main.cpp)

target_link_libraries(${PROJETC_NAME} PRIVATE base)

