#include <raylib.h>
#include <math.h>
#include "TextureLoading.h"
#include "Shapes/shapes.h"


//clang++ entryPoint.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
const int Width = 480;
const int Height = 320;

int main()
{


InitWindow(Width,Height,"testing");
SetTargetFPS(60);
TextureManager& manager = TextureManager::getManager();



while(!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(BLACK);
    
  
    EndDrawing();
   

}
    CloseWindow();       
  

    return 0;
}