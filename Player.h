#pragma once
#include<iostream>
#include"Board.h"
#include <string.h>

class Player {

private:
string Player_name;

public:
	char myChar;
	virtual const string  name()const;
	virtual const Coordinate play(const Board& board) ;
	char getChar();
};
