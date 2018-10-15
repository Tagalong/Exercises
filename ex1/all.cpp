/**
 * All the ex1 functions.
 *
 * Copyright (c) 2018, Sekhar Ravinutala.
 */

#include "ex1/all.h"
#include <assert.h>

float milesToKm(float miles) {
    /**
     * Convert miles to km.
     * - miles: Miles, should be non-negative.
     */
    assert(miles >= 0);

    return miles * 1.6;
}

int factorial(int number) {
    /**
     * Calculate factorial of a number. Factorial(0) = 1.
     * - number: Should be non-negative.
     */
    assert(number >= 0);

    int factorial = 1;
    for(int i = 2; i <= number; i++){
        factorial *= i;
    }
    

    return factorial;
}

double exponent(float power, int powerTerms) {
    /**
     * Get an approximation for the exponent.
     * - power: The power for the exponent.
     * - powerTerms: Number of terms to use after the first (1) term.
     */
    assert(powerTerms >= 0);

    double value = 1, powerTerm = 1;
    for (int i = 1; i <= powerTerms; ++i) {
        powerTerm *= power / i;
        value += powerTerm;
    }

    return value;
}
