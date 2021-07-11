project(lscopyableitem) 

cmake_minimum_required(VERSION 3.10) 

add_definitions(-D_GLIBCXX_USE_CXX11_ABI=0) 

aux_source_directory(src/ls SRC) 

include_directories(include) 

add_library(lscopyableitem SHARED ${SRC})

install(TARGETS lscopyableitem DESTINATION lib)
install(DIRECTORY include/ls DESTINATION include)

