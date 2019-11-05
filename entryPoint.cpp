#include <raylib.h>
#include <math.h>
#include <vector>
#include "TextureLoading.h"
#include "InputManagers/InputManager.h"
#include "VisualTemplates/ListMenu.h"






/*
this is the main entry point for the program which handels the major loops for the execution. 




*/

//clang++ entryPoint.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
const int Width = 480;
const int Height = 320;

int main()
{

//setting up the window and render context. 
InitWindow(Width,Height,"testing");
SetTargetFPS(60);
TextureManager& manager = TextureManager::getManager();
InputManager& Imanager = InputManager::getManager();
std::vector<std::string>testarray;
for(int i = 0; i < 5; i++){
    testarray.push_back("testing");
}

ListMenu test(testarray);



//check if windows kill signal has been sent
while(!WindowShouldClose()){
Imanager.PollInput();
//set up the window for drawing
    BeginDrawing();
    ClearBackground(BLACK);


//finish rendering  
    EndDrawing();
   
   test.Draw();
}
//clean up render memory
    CloseWindow();       
  

    return 0;
}