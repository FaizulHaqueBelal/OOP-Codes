#include <iostream>
using namespace std;


void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "After Swapping in function: x = " << x << ", y = " << y << endl;
}

int main() {
    int x = 1, y = 2;
    cout << "Before Swapping: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After Swapping: x = " << x << ", y = " << y << endl;
    return 0;
}

