// #pragma once
#pragma once
#include<iostream>
#include"Board.h"
#include"Player.h"
#include "DummyPlayers.h"
class TicTacToe
{
	uint size;

public:	
	// Player xPlayer;
	// Player oPlayer;
	Board game_board;
	Player* win;
 	TicTacToe();
	TicTacToe(uint length);
 	~TicTacToe();
	void xTurn (Player& xPlayer);
	void oTurn (Player& xPlayer);
	void play(Player& xPlayer,Player& oPlayer);
	Board board()const;
	Player& winner()const;
	bool FullBoard(Board& ptr);
	bool check_win(Board& t_board);
};
