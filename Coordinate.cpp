#include <iostream>
using namespace std;
#include "Coordinate.h"

Coordinate::Coordinate(uint x2,uint y2){
        this->x=x2;
        this->y=y2;
}
ostream& operator<< (ostream& os, const Coordinate& p){
         os<<"("+to_string(p.x)+","+to_string(p.y)+")";
         return os;
}
