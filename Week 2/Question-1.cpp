/*The following program is used to multiply two complex numbers. Fill in the blanks (in LINE-1,
LINE-2 and LINE-3) so that it will satisfy sample input and output.*/

#include <iostream>

using namespace std;

struct Complex {

    int x, y;
};
Complex operator*(Complex &p1, Complex &p2) { // LINE-1

    struct Complex p3 = { 0, 0 };

    p3.x = (p1.x)*(p2.x) - (p1.y)*(p2.y); // LINE-2

    p3.y = (p1.x)*(p2.y) + (p1.y)*(p2.x); // LINE-3

    return p3;
}
int main() {

    struct Complex p1, p2;

    cin >> p1.x >> p1.y >> p2.x >> p2.y;

    struct Complex p3 = p1*p2;

    cout << p3.x << " " << p3.y;

    return 0;
}
