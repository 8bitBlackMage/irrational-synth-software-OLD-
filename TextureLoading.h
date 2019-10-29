#pragma once
#include <raylib.h>
#include <map>
#include <string.h>
class TextureManager
{
public:


//instance creation
static TextureManager& getManager();

//removal of copy constructor
TextureManager(TextureManager const&) = delete;
void operator = (TextureManager const&) = delete;




//init
TextureManager();

std::map<std::string,Texture2D>Textures;

};



