#include <iostream>
using namespace std;
#include<string>
#include <exception>
#include "Board.h"

Board::Board(){
 size=0;
 char c[NULL][NULL];
}

Board::Board(int size2){
size=size2;
 b = new Spot*[size];
 
    for(int i = 0; i < size; i++){
        b[i] = new Spot[size]; //On heap remember to delete from the heap!!
    }
        
}

Board::Board(const Board& b2){
    size=b2.size;
    b=new Spot*[size];
    for(int i=0;i<size;i++)
    b[i]=new Spot[size];
    for(int i=0;i<size;i++)
    for(int j=0;j<size;j++){
        // b[i][j].c='*';
        char c2=b2.b[i][j].c;
        Spot t(i,j,c2);
        b[i][j]=t;
       
        
    }  
}

Spot& Board::operator[](Coordinate p2) const{
     if((p2.x>=size)||(p2.y>=size)){throw IllegalCoordinateException(p2.x,p2.y);}
    return b[p2.x][p2.y];
}

Board& Board::operator=(char in){
    if((in!='.')&&(in!='X')&&(in!='O')){throw IllegalCharException(in);}
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
          Spot t(i,j,in);
           b[i][j]=t;
       
        
         } 
    }
    return *this;
}

Board& Board::operator=(const Board& b2)
{
    if(this==&b2)
    {
        return *this;
        
    }
    
    for(int i=0; i<size; i++)
    {
        delete[] b[i];
    } 
    
    delete[]b;
    size=b2.size;
    b=new Spot*[size];
    
    for(int i=0;i<size;i++)
    {
        b[i]=new Spot[size];
        for(int j=0;j<size;j++)
        {
            char c2=b2.b[i][j].c;
            Spot t(i,j,c2);
            b[i][j]=t;
        }  
    }
   return *this; 
}



ostream& operator<< (ostream& os, const Board& temp_b){
    for(int i=0;i<temp_b.size;i++){
        for(int j=0;j<temp_b.size;j++){
            os<<temp_b.b[i][j].c;
        }
        os<<endl;
    }
    return os;
    
}
    
Board::~Board(){
    for (int i = 0; i < size; i++){
         delete[] b[i];
    }
    delete[] b;
        
}
 bool Board::operator==(const Board &b2) const{
        if(size!=b2.size){return false;}
        for(int i=0;i<size;i++){
         for(int j=0;j<size;j++){
             if(b[i][j]!=b2.b[i][j]){return false;}
         }
        }
        return true;
    }


// char Board::operator[](Coordinate p2)const{
//     if((p2.x>=size)||(p2.y>=size)){throw IllegalCoordinateException(p2.x,p2.y);}
//     return b[p2.x][p2.y].c;
// }

// Spot Board::operator[](Coordinate p2)const{
//     if((p2.x>=size)||(p2.y>=size)){throw IllegalCoordinateException(p2.x,p2.y);}
//     return b[p2.x][p2.y];
// }

//  char Board::operator=(const Spot& s2){
//      return s2.c;
//  }
