
#include <iostream>
using namespace std;


void swap(int &n1, int &n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {
    int a = 1, b = 2;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
