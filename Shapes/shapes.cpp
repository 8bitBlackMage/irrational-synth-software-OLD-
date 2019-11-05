#include "shapes.h"


//dial class implimentations 
dial::dial(int x, int y, int size, int maxpos, int minpos, TextureManager* Manager)
{
m_Manager = Manager;
m_Xpos = x;
m_Ypos = y;
m_height = 32;
m_width = 32;
m_MaxPos = maxpos;
m_MinPos = minpos;
SorceRect = {0.0f,0.0f,m_height,m_width};
DestRect = {m_Xpos,m_Ypos,m_width + size,m_height + size};

origin = {(((m_width + size) / 2)),(((m_height+ size) / 2))};
}

dial::dial(int x, int y, int size, TextureManager* Manager)
//simplified constructor, with range set to 0-128 (midi cc standard)
{
m_Manager = Manager;
m_Xpos = x;
m_Ypos = y;
m_height = 32;
m_width = 32;
m_MaxPos = 128;
m_MinPos =0;
SorceRect = {0.0f,0.0f,m_height,m_width};
DestRect = {m_Xpos,m_Ypos,m_width + size,m_height + size};

origin = {(((m_width + size) / 2)),(((m_height+ size) / 2))};
}


void dial::Update()
{
m_CurrentPos++; 
m_CurrentAngle = (m_CurrentPos / m_MaxPos ) * 360;

}

void dial::Draw()
{
DrawTexturePro(m_Manager->m_Textures.at("Dial"),SorceRect,DestRect,origin, m_CurrentAngle,WHITE);
}







ListEntry::ListEntry(int x, int y, int h, int w )
{
m_Xpos = x;
m_Ypos = y;
m_height = h;
m_width = w;

}
ListEntry::ListEntry(int x, int y, int h, int w, std::string text)
{
m_Xpos = x;
m_Ypos = y;
m_height = h;
m_width = w;
m_content = text;
}
ListEntry::ListEntry(){

}

ListEntry::~ListEntry(){

}

void ListEntry::Draw(){
if(m_isSelected == true){
    DrawRectangleLines(m_Xpos,m_Ypos,m_width,m_height,WHITE);
    DrawText(m_content.c_str(),(m_Xpos+10),(m_Ypos+10),15,WHITE);
}
if(m_isSelected == false){
    
    DrawText(m_content.c_str(),(m_Xpos+10),(m_Ypos+10),15,WHITE);
}

}

void ListEntry::Update(){
    
}