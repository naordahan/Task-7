// #include <iostream>
#include "TicTacToe.h"
// using namespace std;



TicTacToe::~TicTacToe(){
for (int i = 0; i < game_board.length; i++){
         delete[] game_board.b[i];
    }
    delete[] game_board.b;
}

bool TicTacToe::FullBoard(Board& ptr){
	for(int i=0;i<ptr.length;i++){
	   for(int j=0;j<ptr.length;j++){
		     if(ptr.b[i][j]=='.'){return false;}
    	                            }
                               	}
	return true;
}

TicTacToe::TicTacToe(uint length=0):game_board{length}{ }


void TicTacToe::play(Player& xPlayer, Player& oPlayer)
{xPlayer.myChar='X';
 oPlayer.myChar='O';
	while ((!FullBoard(game_board))||(winner()==xPlayer)||(winner()==oPlayer))
	{game_board[{xPlayer.play(game_board)}]='X';
	 game_board[{oPlayer.play(game_board)}]='O';
	}
}

Board TicTacToe::board() const
{
	return this->game_board;
	
}

Player TicTacToe::winner()const
{
	uint xCount=0;
	uint oCount=0;
// \>
for (int i = 0; i < game_board.length; i++){
      	if(this->game_board[{i,i}].c=='.'){
      		break;
      	}	
      	else if(this->game_board[{i,i}].c=='X'){
      	xCount++;	
      	}
      else if(this->game_board[{i,i}].c=='O'){
      oCount++;
      	}
}
//CHECK
      	if(oCount==game_board.length){
      	return this->oPlayer;	
      	}
      	else if(xCount==game_board.length)
      	{
      	return this->xPlayer;	
      	}
// </
oCount=0,xCount=0;
for (int i = 0; i < game_board.length; i++){ 
      	if(this->game_board[{i,(int)game_board.length-1-i}].c=='.'){
      		break;
      	}
      	else if(this->game_board[{i,(int)game_board.length-1-i}].c=='X'){
      	xCount++;	
      	}
      else if(this->game_board[{i,(int)game_board.length-1-i}].c=='O'){
      oCount++;
      	}
}
//CHECK
      	if(oCount==game_board.length){
      	return this->oPlayer;	
      	}
      	else if(xCount==game_board.length)
      	{
      	return this->xPlayer;	
      	}
//row 
oCount=0,xCount=0;
for (int i = 0; i < game_board.length; i++){ 
  for (int j = 0; j < game_board.length; j++){ 
	if(this->game_board[{i,j}].c=='X'){
		xCount++;
	}
	else if(this->game_board[{i,j}].c=='O'){
		oCount++;
	}
  }
//CHECK
      	if(oCount==game_board.length){
      	return this->oPlayer;	
      	}
      	else if(xCount==game_board.length)
      	{
      	return this->xPlayer;	
      	}
oCount=0,xCount=0;
}

//column 
for (int i = 0; i < game_board.length; i++){ 
  for (int j = 0; j < game_board.length; j++){
	if(this->game_board[{j,i}].c=='X'){
		xCount++;
	}
	else if(this->game_board[{j,i}].c=='O'){
		oCount++;
	}
}
  //CHECK
      	if(oCount==game_board.length){
      	return this->oPlayer;	
      	}
      	else if(xCount==game_board.length)
      	{
      	return this->xPlayer;	
      	}
oCount=0,xCount=0;

}
//end - winner     
}
