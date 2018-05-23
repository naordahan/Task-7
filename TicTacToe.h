#pragma once
#include<iostream>
#include"Player.h"
class TicTacToe
{
	
	Board game_Board;

public:	
	int size;
	TicTacToe();
	virtual ~TicTacToe();
	int getSize();
	TicTacToe(int size);
	void play(Player xPlayer,Player oPlayer);
	Board&  board() const ;
	Player& winner() const;
	bool FullBoard(Board& ptr);
	char getChar();
	string name();
};

