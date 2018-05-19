#include <iostream>
using namespace std;
#include "Coordinate.h"

Coordinate::Coordinate(int x2,int y2){
        this->x=x2;
        this->sy=y2;
}
ostream& operator<< (ostream& os, const Coordinate& p){
         os<<"("+to_string(p.x)+","+to_string(p.y)+")";
         return os;
}
