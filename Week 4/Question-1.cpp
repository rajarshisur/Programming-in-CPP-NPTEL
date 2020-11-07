/*Consider the following program. Fill in the blanks in LINE-1 for forward declaration and in LINE-2 to make available private variable of class B to the member functions of class A such that it will satisfy sample input and output.*/

#include <iostream>
using namespace std;

class B;             // LINE-1

class A {
    int a_ = 0;
public:
    A(int x) : a_(x) { }
    int addB(B&);
    int subtractB(B&);
};

class B {
    int b_ = 5;
public:
    friend class A;         // LINE-2
};
int A::addB(B &b) {
    return (a_ + b.b_);
}

int A::subtractB(B &b) {
    return (a_ - b.b_);
}

int main() {
    int x;
    cin >> x;

    A t1(x);
    B t2;

    cout << t1.addB(t2) << " " << t1.subtractB(t2);

    return 0;
}
