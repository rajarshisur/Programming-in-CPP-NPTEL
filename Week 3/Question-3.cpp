/*Consider the following program and fill in the blanks at LINE-1, LINE-2, LINE-3 with appropriate
initialization of data-members such that it satisfies the given test cases.*/

#include <iostream>
#include <string>
using namespace std;

class Complex {
    const int _r, _i;

public:
    Complex() : _r(0),_i(0) { }                       // LINE-1

    Complex(int r) : _r(r),_i(0) { }                  // LINE-2

    Complex(int r, int i) : _r(r),_i(i) { }           // LINE-3

    void show() { cout << _r << " + " << _i << "i" << endl; }

    int norm() { return _r * _r + _i * _i; }
};

int main() {
    int a, b;
    cin >> a >> b;

    Complex c1;
    Complex c2(a);
    Complex c3(a, b);

    c1.show();
    c2.show();
    c3.show();

    cout << c1.norm() << ", " << c2.norm() << ", " << c3.norm();

    return 0;
}
