/*Consider the following program and fill in the blanks in LINE-1 with appropriate function 
header so that it will take one argument as call by reference and in LINE-2 for the return statement.*/

#include <iostream>

using namespace std;

int Double(int a) { // LINE-1

    return a*2;   // LINE-2
}
int main() {
    int x, y;
    cin >> x >> y;

    cout << Double(x + y);

    return 0;
}
