/*Consider the following program and fill in the function header print() at LINE-1 such that
it matches the given test cases.*/

#include <iostream>

#include <string>

using namespace std;

void print(string a, string b="Anyone"){ // LINE-1

    cout << a << " " << b;
}

int main() {
    string p;
    cin >> p;

    if (p == "x" || p == "X")
        print("Hello");
    else
        print("Hello", p);

    return 0;
}
