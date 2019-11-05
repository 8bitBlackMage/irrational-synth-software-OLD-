cmake_minimum_required(VERSION 2.6)

project(irrationalFrontend)


include_directories("${PROJECT_SOURCE_DIR}/Shapes")
include_directories("${PROJECT_SOURCE_DIR}/VisualTemplates")



add_executable(irrationalFrontend entryPoint.cpp TextureLoading.cpp Shapes/shapes.cpp VisualTemplates/ListMenu.cpp )

#PC mode 
target_link_libraries(irrationalFrontend  -lraylib -lGL -lm -lpthread -ldl -lrt -lX11)

#Pi Mode 
#target_link_libraries(irrationalFrontend  -lbcm_host  -lbrcmGLESv2 -lbrcmEGL  -lraylib -lm -lpthread -ldl -lrt -L/opt/vc/lib)


