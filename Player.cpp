#include "Player.h"
 
bool Player::operator==(const Player& p)const{
  if((name()==p.name())&&(myChar==p.myChar)){return true;}
  return false;
}
// Player::Player(){
 
// }
// Player::~Player(){
    
// }
// const string name(){return "nnn";}
// const Coordinate play(const Board& board){return {0,0};}