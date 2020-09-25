//Consider the following program and fill the blank at LINE-1 to check if s1 is not greater than s2. Look at the the sample input and output to understand the comparison operation and write proper return statements at LINE-2 and LINE-3.

#include <iostream>
#include <string>
using namespace std;

bool StrCmp(string s1, string s2) {

    if (s1.length()>s2.length() || s1.length()<s2.length())    // LINE-1
    
        return 1;    // LINE-2
    else
        return 0;    // LINE-3
}
int main() {

    string str1, str2;

    cin >> str1 >> str2;

    cout << str1 << ", " << str2 << " : " << StrCmp(str1, str2);

    return 0;
}
