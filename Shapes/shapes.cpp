#include "shapes.h"


//dial class implimentations 
dial::dial(int x, int y, int h, int w, int maxpos, int minpos, TextureManager* Manager)
{
m_Manager = Manager;
m_Xpos = x;
m_Ypos = y;
m_height = h;
m_width = w;
m_MaxPos = maxpos;
m_MinPos = minpos;
SorceRect = {0.0f,0.0f,m_height,m_width};
DestRect = {m_Xpos,m_Ypos,m_width,m_height};
origin = {(m_Xpos + (m_width / 2)),(m_Ypos+ (m_height / 2))};
}

dial::dial(int x, int y, int h, int w, TextureManager* Manager)
//simplified constructor, with range set to 0-128 (midi cc standard)
{
m_Manager = Manager;
m_Xpos = x;
m_Ypos = y;
m_height = h;
m_width = w;
m_MaxPos = 128;
m_MinPos =0;
SorceRect = {0.0f,0.0f,m_height,m_width};
DestRect = {m_Xpos,m_Ypos,m_width,m_height};

origin = {((m_width / 2)),((m_height / 2))};
}


void dial::Update()
{
m_CurrentPos++; 
m_CurrentAngle = (m_CurrentPos / m_MaxPos ) * 360;

}

void dial::Draw()
{


DrawTexturePro(m_Manager->Textures.at("Dial"),SorceRect,DestRect,origin, m_CurrentAngle,WHITE);
//DrawTexture(m_Manager->Textures.at("Dial"), 500,500,WHITE);
}