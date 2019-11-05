#include <raylib.h>
#include <math.h>
#include <vector>
#include "TextureLoading.h"
#include "Shapes/shapes.h"






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
std::vector<ListEntry>M_TestArray;
for(int i = 1; i < 5; i++)
{
    M_TestArray.push_back(ListEntry(50,50 * i,30,200,"test"));
}


//check if windows kill signal has been sent
while(!WindowShouldClose()){

//set up the window for drawing
    BeginDrawing();
    ClearBackground(BLACK);
   for(int i =0; i < M_TestArray.size(); i++){
       M_TestArray.at(i).Draw();
   }



//finish rendering  
    EndDrawing();
   
   // Test.Update();
}
//clean up render memory
    CloseWindow();       
  

    return 0;
}