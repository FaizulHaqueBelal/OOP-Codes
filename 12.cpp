#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum = " << (a + b);
}

void add(int a, int b, int c) {
    cout << endl << "Sum = " << (a + b + c);
}

int main() {
    add(10, 2);       // Calls the 2-parameter version
    add(5, 6, 4);     // Calls the 3-parameter version
    return 0;
}

