#include "../../include/calculator/calculator.h"
#include <iostream>

using namespace std;

int main() {
    Calculator calc;

    double a, b;
    char op;

    cout << "=== Simple Calculator ===" << endl;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+,-,*,/): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    try {
        switch(op) {
            case '+':
                cout << calc.add(a,b) << endl;
                break;
            case '-':
                cout << calc.subtract(a,b) << endl;
                break;
            case '*':
                cout << calc.multiply(a,b) << endl;
                break;
            case '/':
                cout << calc.divide(a,b) << endl;
                break;
            default:
                cout << "Invalid operator" << endl;
        }
    }
    catch(exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}