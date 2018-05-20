#pragma once
#include<iostream>
#include"Board.h"
#include <string.h>

class Player {

private:
char myChar;
string Player_name;

public:
	virtual const string  name()const;
	virtual const Coordinate play(const Board& board) ;
	char getChar();
};
