#pragma once
#include <vector>


//enum of all buttons, enum used so it can be itterated through in PollInput()
enum keys{
PLAY,STOP,UP,DOWN,LEFT,RIGHT,HOME,BACK,ENTER,
CNOTE,CSNOTE,DNOTE,DSNOTE,ENOTE,FNOTE,FSNOTE,
GNOTE,GSNOTE,ANOTE,ASNOTE,BNOTE,OCTAVEUP,OCTAVEDOWN,TOTAL
};





class InputManager
//singleton class for input management, 
//will have two seperate implimenations for PC and PI hardware 
{
public:
static InputManager& getManager();
void PollInput();
bool GetInput(keys keyToCheck);
private:
InputManager();
~InputManager();
std::vector<bool>input;
std::vector<int>debounceTimers;



InputManager(InputManager const&) = delete;
void operator = (InputManager const&) = delete;


};

