#include <raylib.h>




class Drawable
{
//container class for all drawable objects for batch drawing calls
public:
Drawable(){}

virtual void Draw() =0;

int m_Xpos;
int m_Ypos;
int m_Size;
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
dial(int x, int y, int maxpos, int minpos)
{

}
void Draw() override
{


}

void Update() override
{



}
private:
int m_CurrentPos;
int m_lineEndPointX;
int m_lineEndPointY;
int m_CurrentAngle;


};


