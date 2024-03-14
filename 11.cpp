#include <iostream>
using namespace std;

// Defining the function with default arguments
void display(char c = '*', int count = 3) {
    for (int i = 1; i <= count; ++i) {
        cout << c;
    }
cout << endl;
}
int main() {
    int count = 5;

    cout << "No argument passed: ";
    display(); // Uses default parameters '*' and 3

    cout << "First argument passed: ";
    display('#'); // Overrides the default character, but keeps count as 3

    cout << "Both arguments passed: ";
    display('$', count); // Overrides both default arguments

    return 0;
}

