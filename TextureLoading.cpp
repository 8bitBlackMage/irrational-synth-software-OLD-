#include "TextureLoading.h"
#include <dirent.h>

//texture management singleton implimentation

TextureManager::TextureManager()
{
//standard constructor 
    DIR * pdir;
    struct dirent *entry;
    if(pdir=opendir("./assets"))
    {   
    while(entry = readdir(pdir))
        {
        
        
         std::string rawname = entry->d_name;
        if(rawname.find("png") != std::string::npos){


        std::string Fullpath = "./assets/" + rawname;
        Texture2D Texture = LoadTexture(Fullpath.c_str());
        size_t lastdot = rawname.find_last_of(".");
       rawname = rawname.substr(0,lastdot);
       m_Textures.emplace(rawname, Texture);
       m_Index.push_back(rawname);
        }
        }
    }

}

//remove all textures from Vram and clear out the arrays
TextureManager::~TextureManager()
{
for(int i = 0; i < m_Textures.size(); i++)
{

UnloadTexture(m_Textures.at(m_Index.at(i)));

}
m_Textures.empty();
m_Index.empty();
}


//static instance producer 
TextureManager & TextureManager::getManager()
{
static TextureManager instance;

return instance;

}