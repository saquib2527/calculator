// Copyright 2023 Nazmus Saquib

#include <iostream>

#include "src/calculator.h"

int main(int arg, char *argv[]) {
    calculator::Calculator calc;
    std::cout << calc.add(2, 3) << std::endl;
    return 0;
}

