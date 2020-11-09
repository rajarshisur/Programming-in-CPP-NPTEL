/*Consider the following program and fill in the banks in LINE-1 with appropriate overloaded operation and LINE-2 with appropriate parameter for fun() function such that it matches the given test cases.*/

#include <iostream>
using namespace std;

class myClass {
public:
    int data;
    myClass(int x) : data(x) { }
    myClass operator==(myClass &m1) {
        myClass m(0);
        if(data==m1.data) m.data=1;    // LINE-1
            return m;
    }
};

void fun(myClass m) { // LINE-2
    cout << m.data << endl;
}

int main() {
    int i, j, k;
    cin >> i >> j >> k;

    myClass m1(i), m2(j), m3(k);
    fun(m1 == m2 == m3);

    return 0;
}
