
 #include <iostream>
#include "TicTacToe.h"
 using namespace std;
// Player& TicTacToe::winner()const
// {
// 	uint xCount=0;
// 	uint oCount=0;
// // \>
// for (int i = 0; i < game_board.length; i++){
//       	if(this->game_board[{i,i}].c=='.'){
//       		break;
//       	}	
//       	else if(this->game_board[{i,i}].c=='X'){
//       	xCount++;	
//       	}
//       else if(this->game_board[{i,i}].c=='O'){
//       oCount++;
//       	}
// }
// //CHECK
//       	if(oCount==game_board.length){win->setChar('O');
//       	return *(this->win);
//       	}
//       	else if(xCount==game_board.length)
//       	{win->setChar('X');
//       	return *(this->win);	
//       	}
// // </
// oCount=0,xCount=0;
// for (int i = 0; i < game_board.length; i++){ 
//       	if(this->game_board[{i,(int)game_board.length-1-i}].c=='.'){
//       		break;
//       	}
//       	else if(this->game_board[{i,(int)game_board.length-1-i}].c=='X'){
//       	xCount++;	
//       	}
//       else if(this->game_board[{i,(int)game_board.length-1-i}].c=='O'){
//       oCount++;
//       	}
// }
// //CHECK
//       	if(oCount==game_board.length){
//       		win->setChar('O');
//       	return *(this->win);	
//       	}
//       	else if(xCount==game_board.length)
//       	{win->setChar('X');
//       	return *(this->win);	
//       	}
// //row 
// oCount=0,xCount=0;
// for (int i = 0; i < game_board.length; i++){ 
//   for (int j = 0; j < game_board.length; j++){ 
// 	if(this->game_board[{i,j}].c=='X'){
// 		xCount++;
// 	}
// 	else if(this->game_board[{i,j}].c=='O'){
// 		oCount++;
// 	}
//   }
// //CHECK
//       	if(oCount==game_board.length){
//       		win->setChar('O');
//       	return *(this->win);	
//       	}
//       	else if(xCount==game_board.length)
//       	{win->setChar('X');
//       	return *(this->win);	
//       	}
// oCount=0,xCount=0;
// }

// //column 
// for (int i = 0; i < game_board.length; i++){ 
//   for (int j = 0; j < game_board.length; j++){
// 	if(this->game_board[{j,i}].c=='X'){
// 		xCount++;
// 	}
// 	else if(this->game_board[{j,i}].c=='O'){
// 		oCount++;
// 	}
// }
//   //CHECK
//       	if(oCount==game_board.length){
//       		win->setChar('O');
//       	return *(this->win);	
//       	}
//       	else if(xCount==game_board.length)
//       	{win->setChar('X');
//       	return *(this->win);	
//       	}
// oCount=0,xCount=0;

// }
// //end - winner     
// }
//______________________________________________________________________________________________________________________
Player& TicTacToe::winner()const
{ return *(this->win);
	
}



//____________________________________________

 TicTacToe::TicTacToe(){
	
 }
 TicTacToe::~TicTacToe(){
// for (int i = 0; i < game_board.length; i++){
//          delete[] game_board.b[i];
//     }
//     //delete[] game_board.b;
//     // delete[] win;
 }

bool TicTacToe::FullBoard(Board& ptr){
	for(int i=0;i<ptr.length;i++){
	   for(int j=0;j<ptr.length;j++){
		     if(ptr.b[i][j]=='.'){return false;}
    	                            }
                               	}
	return true;
}

TicTacToe::TicTacToe(uint length):game_board{length}{ }
//________________________________________________________________________



void TicTacToe::play(Player& xPlayer, Player& oPlayer)
{game_board='.';
bool flag=true;
xPlayer.setChar('X');
 oPlayer.setChar('O');
	 while (flag&&(!FullBoard(game_board))&&(!check_win(game_board)))
	{   try {if(game_board[{xPlayer.play(game_board)}].c=='O')
	          {  
	         win=&oPlayer; 
	         flag=false;
	          }
	        }
	       catch(const string& ex)
	            { game_board='.';
	              win=&oPlayer;
	              flag=false;
	             }
	       
	       
	       
	       
		
		if(flag)
		{
		   if(check_win(game_board)){return;}
		  try {game_board[{xPlayer.play(game_board)}]='X';}
		      
		      catch(const string& ex)
	            { game_board='.';
	              game_board[{xPlayer.play(game_board)}]='X';
	              win=&oPlayer;
	              flag=false;
	             }
		      
		      
	       if(check_win(game_board)){win=&xPlayer; return;}
	    
		}
	    try {if(game_board[{oPlayer.play(game_board)}].c=='X')
	     { 
	       win=&xPlayer; 
	       flag=false;
	     }
	        }
	     catch(const string& ex)
	            { game_board='.';
	              game_board[{xPlayer.play(game_board)}]='X';
	              win=&xPlayer;
	              flag=false;
	             }
	     
	     
	     
	    
	    if(flag)
	     {
	    try {game_board[{oPlayer.play(game_board)}]='O';}
	    
	        catch(const string& ex)
	            { game_board='.';
	              game_board[{xPlayer.play(game_board)}]='X';
	              win=&xPlayer;
	              flag=false;
	             }
	    
	    
	     if(check_win(game_board)){win=&oPlayer;}
	     }
	    
     }
	

}
//____________________________________________________


Board TicTacToe::board() const
{
	return this->game_board;
	
}


// // Fullgame_board

//________________check wining__________________
bool TicTacToe::check_win(Board& t_board){
	uint n=t_board.length;
	uint count_o=0,count_x=0;
	while(1){
		for(int i=0;i<n;i++)
		{count_o=0;
		 count_x=0;
			for(int j=0;j<n;j++)
			{if(t_board[{i,j}].c=='X')
			        {
				     count_x++;
				     if(count_x==n){return true; }
			        }
			  if(t_board[{i,j}].c=='O')
			        {
			     	count_o++;
			    	if(count_o==n){return true; }
			        }
				
				
			}
		}
		for(int i=0;i<n;i++)
		{count_o=0;
		 count_x=0;
			for(int j=0;j<n;j++)
			{if(t_board[{j,i}].c=='X')
			        {
				     count_x++;
				     if(count_x==n){return true;}
			        }
			  if(t_board[{j,i}].c=='O')
			        {
			     	count_o++;
			    	if(count_o==n){return true;}
			        }
				
				
			}
		}
		 count_o=0;
		 count_x=0;
		for(int i=0;i<n;i++)
		{  if(t_board[{(int)(n-1-i),i}].c=='X')
		    {
		    	count_x++;
		    	if(count_x==n){return true;}
		    }
		    if(t_board[{i,(int)(n-1-i)}].c=='O')
		    {
		    	count_o++;
		    	if(count_o==n){return true;}
		    }
			
		}
		 count_o=0;
		 count_x=0;
		for(int i=n-1;i>=0;i--)
		{  if(t_board[{i,i}].c=='X')
		    {
		    	count_x++;
		    	if(count_x==n){return true;}
		    }
		    if(t_board[{i,i}].c=='O')
		    {
		    	count_o++;
		    	if(count_o==n){return true;}
		    }
			
		}
		return false;
	 }
	return false;
	
}
