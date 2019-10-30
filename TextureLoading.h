#pragma once
#include <raylib.h>
#include <map>
#include <vector>
#include <string.h>
class TextureManager
{
public:


//instance creation
static TextureManager& getManager();

//removal of copy constructor
TextureManager(TextureManager const&) = delete;
void operator = (TextureManager const&) = delete;
//access to texture memory via a map, but also with vector based indexing  
std::map<std::string,Texture2D>m_Textures;
std::vector<std::string>m_Index;

private:

//init
TextureManager();
//standard Desconstructor 
~TextureManager();

};



