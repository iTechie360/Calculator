#include "../include/calculator/calculator.h"
#include <cassert>
#include <iostream>

int main() {
    Calculator calc;

    assert(calc.add(2,2) == 4);
    assert(calc.subtract(5,3) == 2);
    assert(calc.multiply(3,4) == 12);
    assert(calc.divide(10,2) == 5);

    std::cout << "All tests passed.\n";

    return 0;
}