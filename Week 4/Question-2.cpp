/*Consider the following program and fill in the blanks in LINE-1 for overloading of multiplication operator, in LINE-2 and LINE-3 to calculate multiplication of two complex numbers. Consider sample input and output.*/

#include <iostream>
using namespace std;

class Complex {
    int re, im;
public:
    Complex(int r = 0, int i = 0) : re(r), im(i) { }
    Complex operator*(const Complex &c) { // LINE-1
        int x, y;
        x = re*c.re-im*c.im;            // LINE-2
        y = re*c.im+im*c.re;            // LINE-3
        Complex t1(x, y);
        return t1;
    }
    void show() {
        cout << re << " " << im;
    }
};

int main() {
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    Complex c1(x1, y1), c2(x2, y2);
    Complex c3 = c1 * c2;

    c3.show();

    return 0;
}
