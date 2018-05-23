#pragma once
#include<iostream>
using namespace std;
#include "Board.h"



class Player{
    public:
    char myChar;
    // Player();
    // ~Player();
    void setChar(char t){myChar=t;}
    virtual const string name()const=0;
    virtual const Coordinate play(const Board& board)=0;
    bool operator==(const Player& p)const;
    char getChar(){return myChar;}
    
    
};
// #pragma once
// #include<iostream>
// #include"Board.h"
// #include <string.h>

// class Player {

// private:
// string Player_name;

// public:
// 	char myChar;
// 	virtual const string  name()const;
// 	virtual const Coordinate play(const Board& board) ;
// };