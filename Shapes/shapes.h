#pragma once
#include <raylib.h>
#include "../TextureLoading.h"



class Drawable
{
//container class for all drawable objects for batch drawing calls
public:
Drawable(){}

virtual void Draw() =0;

float m_Xpos;
float m_Ypos;
float m_height;
float m_width;
Color m_Tint;
Rectangle SorceRect;
Rectangle DestRect;
Vector2 origin;
TextureManager *m_Manager;
};

class Control : public Drawable
{
//container class for all controls on screen for batch drawing and update calls 
//inherets from Drawable.
public:


virtual void Update()=0;


};





class dial : public Control
{

public:
dial(int x, int y,int h, int w , int maxpos, int minpos, TextureManager* Manager);
dial(int x, int y,int h, int w, TextureManager* Manager);
void Draw() override;


void Update() override;
private:
float m_CurrentPos = 0;
int m_lineEndPointX;
int m_lineEndPointY;
float m_CurrentAngle;
int m_MaxPos;
int m_MinPos;

};


