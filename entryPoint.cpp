#include <raylib.h>


//clang++ entryPoint.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
const int Width = 1024;
const int Height = 768;

int main()
{
InitWindow(Width,Height,"testing");
while(!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(BLACK);
    DrawText("hello world", 256, 256, 40, LIGHTGRAY);


    EndDrawing();
}
    CloseWindow();       
  

    return 0;
}