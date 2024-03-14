#include <iostream>
using namespace std;

// Inline function to calculate the square of an integer
inline int square(int num) {
    return num * num;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    // Call the inline function
    int result = square(x);

    cout << "The square of " << x << " is " << result << endl;
    return 0;
}

