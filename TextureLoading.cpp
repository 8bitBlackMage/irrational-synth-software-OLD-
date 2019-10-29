#include "TextureLoading.h"
#include <dirent.h>



TextureManager::TextureManager()
{
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
       Textures.emplace(rawname, Texture);
        }
        }
    }

}


TextureManager & TextureManager::getManager()
{
static TextureManager instance;

return instance;

}