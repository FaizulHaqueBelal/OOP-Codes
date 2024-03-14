#include <iostream>
using namespace std;

class primechecker {
    int n, count;

public:
    void input() {
        cout << "Enter any number: ";
        cin >> n;
    }

    void output() {
        count = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
        }
        if (count == 2) {
            cout << "Prime number";
        } else {
            cout << "Not a prime number";
        }
    }
};

int main() {
    primechecker obj;
    obj.input();
    obj.output();
    return 0;
}

