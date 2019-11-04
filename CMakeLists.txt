cmake_minimum_required(VERSION 2.6)

project(irrationalFrontend)


include_directories("${PROJECT_SOURCE_DIR}/Shapes")




add_executable(irrationalFrontend entryPoint.cpp TextureLoading.cpp Shapes/shapes.cpp )


#target_link_libraries(irrationalFrontend  -lraylib -lGL -lm -lpthread -ldl -lrt -lX11)


target_link_libraries(irrationalFrontend  -lraylib -lGL -lm -lpthread -ldl -lrt)




