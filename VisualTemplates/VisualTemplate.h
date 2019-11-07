#pragma once
#include "raylib.h"
#include"../TextureLoading.h"
#include"../InputManagers/InputManager.h"
class VisualTemplate{
//master class 


public:
VisualTemplate(TextureManager & textures,
InputManager & input):Textures(textures),Input(input){}
virtual void Draw() = 0;
virtual void Update() = 0;

//toolbar stuff 
Texture2D HomeButton ;
Texture2D BackButton ;
Vector2 HomeButtonPos;
Vector2 BackButtonPos;
//managers
TextureManager & Textures;
InputManager & Input;
};


namespace toolbar
{
static int G_TOOLBAR_HEIGHT = 40;
static int G_TOOLBAR_WIDTH = 480;
static int G_TOOLBAR_PADDING = 8;
}