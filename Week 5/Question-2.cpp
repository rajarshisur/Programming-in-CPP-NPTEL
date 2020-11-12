/*Consider the following program. Fill in the blanks in LINE-1 such that global function dist
can access private member of class Coordinate. Fill in the blanks at LINE-2 and LINE-3 to
complete constructor definition.*/

#include <iostream>

#include <cmath>

using namespace std;

class Coordinate {

    int x, y, z;

public:
    Coordinate(int _x, int _y, int _z = 0) : 
        x(_x), y(_y), z(_z) {    }
    friend double dist(Coordinate &c1, Coordinate &c2); // LINE-1
};

class TwoDCoordinate : public Coordinate {

public:

    TwoDCoordinate(int _x,int _y, int _z=0) : // LINE-2

        Coordinate(_x, _y, _z) { }        
};

class ThreeDCoordinate : public Coordinate {

public:

    ThreeDCoordinate(int _x, int _y, int _z) : // LINE-3

        Coordinate(_x, _y, _z) { } 
};
double dist(Coordinate &c1, Coordinate &c2) {
    return sqrt(pow((c1.x - c2.x), 2) + 
                pow((c1.y - c2.y), 2) + 
                pow((c1.z - c2.z), 2));
}

int main() {
    int x1, y1, x2, y2, z2;
    cin >> x1 >> y1 >> x2 >> y2 >> z2;

    TwoDCoordinate t1(x1, y1);
    ThreeDCoordinate t2(x2, y2, z2);

    cout << dist(t1, t2) << endl;

    return 0;
}
