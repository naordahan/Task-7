#include <iostream>
using namespace std;
class Coordinate {
    
    public:
        uint x;
        uint y;
    
        Coordinate(uint x2,uint y2);
        friend ostream& operator<< (ostream& os, const Coordinate& p);
};

