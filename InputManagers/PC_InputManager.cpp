#include "InputManager.h"
#include<raylib.h>
#include<stdio.h>

std::vector<KeyboardKey>TestKey;
int test  = 0;
InputManager::InputManager()
{
TestKey.resize(keys::TOTAL);
input.resize(keys::TOTAL);
debounceTimers.resize(keys::TOTAL);

//mapping the keybord keys to function keys 
TestKey.at(PLAY)=KeyboardKey::KEY_SPACE;
TestKey.at(STOP)=KeyboardKey::KEY_LEFT_ALT;
TestKey.at(UP)=KeyboardKey::KEY_UP;
TestKey.at(DOWN)=KeyboardKey::KEY_DOWN;
TestKey.at(LEFT)=KeyboardKey::KEY_LEFT;
TestKey.at(RIGHT)=KeyboardKey::KEY_RIGHT;
TestKey.at(HOME)=KeyboardKey::KEY_LEFT_CONTROL;
TestKey.at(BACK)=KeyboardKey::KEY_BACKSPACE;
TestKey.at(ENTER)=KeyboardKey::KEY_ENTER;
//notes
TestKey.at(CNOTE)=KeyboardKey::KEY_Z;
TestKey.at(CSNOTE) = KeyboardKey::KEY_S;
TestKey.at(DNOTE)=KeyboardKey::KEY_X;
TestKey.at(DSNOTE)=KeyboardKey::KEY_D;
TestKey.at(ENOTE)= KeyboardKey::KEY_C;
TestKey.at(FNOTE) = KeyboardKey::KEY_V;
TestKey.at(FSNOTE)= KeyboardKey::KEY_G;
TestKey.at(GNOTE) = KeyboardKey::KEY_B;
TestKey.at(GSNOTE) = KeyboardKey::KEY_H;
TestKey.at(ANOTE)= KeyboardKey::KEY_N;
TestKey.at(ASNOTE) = KeyboardKey::KEY_J;
TestKey.at(BNOTE) =KeyboardKey::KEY_M;
TestKey.at(OCTAVEUP) = KeyboardKey::KEY_RIGHT_BRACKET;
TestKey.at(OCTAVEDOWN) = KeyboardKey::KEY_LEFT_BRACKET;
}


bool InputManager::GetInput(keys keyToCheck){
return input.at(keyToCheck);
}

void InputManager::PollInput()
{
for(int i =0; i < keys::TOTAL; i++)
{
    if(IsKeyDown(TestKey.at((keys)i)) != true){
        input.at((keys)i) = false;
    }

    
   
    if( IsKeyPressed(TestKey.at((keys)i)) == true){
        test++;
        printf("pressed \n");
        printf("%i \n", test);
        input.at((keys)i) = true;
    }

        
   

}





}

InputManager& InputManager::getManager(){
    static InputManager instance;

    return instance;
}

InputManager::~InputManager(){

}