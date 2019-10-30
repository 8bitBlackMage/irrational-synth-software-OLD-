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