/**
 * Run ex1.
 * 
 * Copyright (c) 2018, Sekhar Ravinutala.
 */

#include <math.h>
#include <iostream>
#include <csignal>
#include "ex1/all.h"
#include "ex1/run.h"

using std::cin, std::cout, std::endl;

void ex1::run() {
    // Miles to km.
    float miles;
    cout << "Miles: ";
    cin >> miles;
    cout << miles << " mile(s) = " << milesToKm(miles) << " km" << endl;

    // Factorial.
    int number;
    cout << endl << "Factorial input: ";
    cin >> number;
    cout << "Factorial(" << number << ") = " << factorial(number) << endl;

    // Exponent.
    float power;
    cout << endl << "Power for exponent: ";
    cin >> power;
    cout << "Approximations for real value " << exp(power) << ":" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << i << "\t" << exponent(power, i) << endl;
    }
}
