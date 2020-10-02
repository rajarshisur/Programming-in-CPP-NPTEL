/*Consider the following program and fill in the blanks at LINE-1, and LINE-2. LINE-1
should be filled with dynamic memory allocation code which will allocate memory to the
pointer p for three integers. LINE-2 should be filled with memory deletion code.*/

#include <iostream>

using namespace std;

void process(int *p) { 

    for (int i = 0; i<3; i++)
        cin >> *(p + i);
        
    for (int i = 2; i >= 0; i--)
        cout << *(p + i) << " ";
}
int main() {
    int *p;
    
    int arr[10]; p = arr; // LINE-1
    
    process(p);
    
    cout<<"";     // LINE-2
    
    return 0;
}
