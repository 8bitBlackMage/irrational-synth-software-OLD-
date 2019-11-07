#include "ListMenu.h"


ListMenu::ListMenu(InputManager  & input, TextureManager & texture):VisualTemplate(texture,input)
{
;
HomeButtonPos = {0,0};
BackButtonPos = {32,0};
HomeButton = Textures.m_Textures.at("Home");
BackButton = Textures.m_Textures.at("Arrow");
}
ListMenu::ListMenu(std::vector<std::string>entries, InputManager  & input, TextureManager & texture):VisualTemplate(texture,input)
{
HomeButtonPos = {0,0};
BackButtonPos = {32,0};
HomeButton = Textures.m_Textures.at("Home");
BackButton = Textures.m_Textures.at("Arrow");



for(int i = 0; i < entries.size(); i++)
{
int x = 50;
int y = toolbar::G_TOOLBAR_HEIGHT + toolbar::G_TOOLBAR_PADDING + ((m_entryHeight+16) * i);
printf("%i \n",y);
listEntryText.push_back(entries.at(i));
Entries.push_back(ListEntry(x,y,m_entryHeight,m_entryWidth,listEntryText.at(i)));
currentlySelected = 0;
}
}
ListMenu::~ListMenu()
{

}

void ListMenu::Draw()
{
for(int i = 0; i < Entries.size(); i++)
{
if(Entries.at(i).m_isSelected == true)
    {
        if(i != currentlySelected){
           Entries.at(i).m_isSelected = false;
        }
        
    }
        if(Entries.at(i).m_isSelected == false)
    {
        if(i == currentlySelected){
           Entries.at(i).m_isSelected = true;
        }
        
    }
Entries.at(i).Draw();
DrawTextureV(HomeButton, HomeButtonPos,WHITE);
DrawTextureV(BackButton,BackButtonPos, WHITE);
}
}


void ListMenu::Update()
{
if(Input.GetInput(keys::DOWN) == true){
    currentlySelected++;
    return;
}
else if(Input.GetInput(keys::UP) == true){
    currentlySelected--;
    return;
}

}