/*Consider the following program. Fill in the blank at LINE-1 such that global function vehicleDetails
can access private member of class Vehicle. Fill in the blank at LINE-2 and LINE-3 to call
constructor of Vehicle class.*/

#include <iostream>

#include <string>

using namespace std;

class Vehicle {
    string vehicleName;

    int noOfWheels;

protected:
    Vehicle(string s, int w) : vehicleName(s), noOfWheels(w) { }
public:
    friend void vehicleDetails(const Vehicle&); // LINE-1
};

class Twowheeler : public Vehicle { public:

    Twowheeler(string n) : Vehicle(n,2) { }           // LINE-2
};

class Threewheeler : public Vehicle { public:

    Threewheeler(string n) : Vehicle(n,3) { }         // Line-3
};
void vehicleDetails(const Vehicle &v) {
    cout << v.vehicleName << ": ";
    if (v.noOfWheels == 2)
        cout << "Two Wheeler";
    else
        cout << "Three Wheeler";
}

int main() {
    string s;
    int n;
    Vehicle *v;

    cin >> s >> n;

    if (n == 2)
        v = new Twowheeler(s);
    else
        v = new Threewheeler(s);

    vehicleDetails(*v);

    return 0;
}
