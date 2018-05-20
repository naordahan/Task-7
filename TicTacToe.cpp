
#include "TicTacToe.h"
using namespace std;

TicTacToe::TicTacToe()
{
}

TicTacToe::TicTacToe(int size)
{

}

void TicTacToe::play(Player xPlayer, Player oPlayer)
{
	while (!FullBoard(this->Game_Board) || !winner())
	{

	}
}

Board &  TicTacToe::board() const
{
	return *this;
}

Player & TicTacToe::winner() const
{
	// TODO: insert return statement here
}

bool TicTacToe::FullBoard(Board& ptr)
{
	for (int i = 0; i < TicTacToe::getSize(); i++)
	{
		for (int j = 0; j < TicTacToe::getSize(); j++)
		{
			if ((*(&ptr + i * TicTacToe::getSize() + j)) == '.')
			{
				return false;
			}
		}
	}
	return true;
}


TicTacToe::~TicTacToe()
{
}

int TicTacToe::getSize()
{
	return; TicTacToe::size;
}
