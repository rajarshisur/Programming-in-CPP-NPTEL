//Consider the following program and fill in the blanks at LINE-1 to define a function pointer type Fun_Ptr such that it can be used to create a pointer to point add() function. At LINE-2 create function pointer fp to point to function add() such that it satisfies  the given test cases.

#include <iostream>

using namespace std;

void add(int a, int b) {

    cout << a + b;

}
typedef void(*Fun_Ptr)(int,int); // LINE-1

Fun_Ptr fp=&add; // LINE-2

int main() {

    int a, b;

    cin >> a >> b;

    (*fp)(a, b);

    return 0;
}
