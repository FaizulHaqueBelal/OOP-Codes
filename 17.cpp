#include <iostream>
using namespace std;

// Define the Calculator class
class Calculator {
public:
    // Data members (variables)
    double a;
    double b;

    // Member functions (methods)
    double add() {
        return a + b;
    }

    double subtract() {
        return a- b;
    }

    double multiply() {
        return a * b;
    }

    double divide() {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0.0;
        }
    }
};

int main() {
    // Create an object of the Calculator class
    Calculator myCalculator;

    // Get input from the user
    cout << "Enter two numbers: ";
    cin >> myCalculator.a >> myCalculator.b;

    // Perform arithmetic operations
    cout << "Sum: " << myCalculator.add() << endl;
    cout << "Difference: " << myCalculator.subtract() << endl;
    cout << "Product: " << myCalculator.multiply() << endl;
    cout << "Quotient: " << myCalculator.divide() << endl;

    return 0;
}

