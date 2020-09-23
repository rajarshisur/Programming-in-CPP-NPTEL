//Consider the following code snippet. Fill in the blank at LINE-1 to create a stack and at LINE-2 to fill the stack with the value of array str. Look into the test cases to validate the outputs. 

#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main() {

    char str[19] = "Programming";
    
    cin >> str;
    stack<char> s;    // LINE-1    


    for (int i = 0; i < strlen(str); i++)

        s.push(str[i]);    // LINE-2
 for (int i = 0; i < strlen(str) - 1; i++) {
        cout << s.top();
        s.pop();
    }

    return 0;
}       
