#include <raylib.h>
#include <math.h>
#include "TextureLoading.h"
#include "Shapes/shapes.h"


//clang++ entryPoint.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
const int Width = 1024;
const int Height = 768;
int endposx;
int endposy;
int main()
{
InitWindow(Width,Height,"testing");
SetTargetFPS(60);
TextureManager& manager = TextureManager::getManager();

dial Test(500,500,64,64,&manager);


while(!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(BLACK);
    DrawText("hello world", 256, 256, 40, LIGHTGRAY);
    Test.Draw();
    EndDrawing();
    Test.Update();
}
    CloseWindow();       
  

    return 0;
}