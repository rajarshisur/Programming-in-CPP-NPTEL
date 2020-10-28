/* Fill in the blanks as instructed to declare and define appropriate objects 
so that the program generates the output as per the given test cases.*/

#include <iostream> 
using namespace std;

class integer {
    int _x;
public:
    integer() : _x(0) { }
    integer(int x) : _x(x) { }
    integer(const integer &obj) : _x(obj._x) { }
    void display() { cout << _x << " "; }
};

int main() {
    int val;

    cin >> val;

    integer objA;  // LINE-1: Invoke Default Constructor

    integer objB(val);  // LINE-2: Invoke Parameterized Constructor

    integer objC=objB;  // LINE-3: Invoke Copy Constructor
    objA.display();

    objB.display();

    objC.display();

    return 0;
}
