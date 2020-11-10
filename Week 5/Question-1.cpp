/*Consider the following program. Fill in the blank at LINE-1 for appropriate inheritance. Fill in the blanks at LINE-2 and LINE-3 to complete the function definition such that it can satisfy the given test cases.*/

#include <iostream>
using namespace std;

#define PI 3.14

class Volume {
public:
    double getValue(int r) { return (4 * PI * r * r * r / 3); }
};

class SurfaceArea {
public:
    double getValue(int r) { return 4 * PI * r * r; }
};
class Sphere : public Volume, public SurfaceArea {              // LINE-1
    int _r;
public:
    Sphere(int a) : _r(a) { }
    double getVolume() { return Volume::getValue(_r); }      // LINE-2
    double getSurfaceArea() { return SurfaceArea::getValue(_r); } // LINE-3    
};

int main() {
    int a;
    cin >> a;

    Sphere s(a);
    cout << s.getVolume() << ", " << s.getSurfaceArea();

    return 0;
}
