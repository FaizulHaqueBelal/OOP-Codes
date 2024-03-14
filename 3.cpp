#include <iostream>
using namespace std;

int x; // Global variable

int main() {
    int x = 10; // Local variable
    cout << "Value of global x is " << ::x << endl;
    cout << "Value of local x is " << x << endl;
    return 0;
}

