/*Consider the below program. Fill in the blanks at LINE-1, LINE-2 and LINE-3 by following given instructions such that it satisfies the given test cases.*/

#include <iostream>
using namespace std;

class myClass {
    int data;
    static myClass *t;        // LINE-1 Complete the declaration
    myClass(int x) : data(x) { }
public:
    static myClass * create(int x) {    // LINE-2 Mention return type of the function
        if (!t)
            t = new myClass(x);       // LINE-3 Allocate memory towards object t
            return t;
    }
    void show() {
        cout << data;
    }
};

myClass *myClass::t = 0;

int main() {
    int x, y;
    myClass *m1, *m2;

    cin >> x >> y;
    m1 = myClass::create(x);
    m2 = myClass::create(y);

    m1->show();
    m2->show();

    return 0;
}
