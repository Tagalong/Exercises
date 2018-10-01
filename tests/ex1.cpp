/**
 * Tests for all ex1 functions.
 * 
 * Copyright (c) 2018, Sekhar Ravinutala.
 */

#include <math.h>
#include <gtest/gtest.h>
#include "ex1/all.h"

TEST(ex1, milesToKm) {
    // Should scale by 1.6.
    ASSERT_FLOAT_EQ(milesToKm(1.0), 1.6);
}

TEST(ex1, factorial) {
    // Should return 1 for 0.
    ASSERT_EQ(factorial(0), 1);

    // Should return product of all values till the number.
    ASSERT_EQ(factorial(5), 120);
}

TEST(ex1, exponent) {
    // Should be 1 when power is 0, even for 0 power terms.
    ASSERT_DOUBLE_EQ(exponent(0, 0), 1);

    // Should be pretty close to the real value with many power terms.
    float power = 2;
    ASSERT_LE(abs(exp(power) - exponent(power, 20)), 1e-6);

    // Should get increasingly closer to the real value.
    double diff1 = abs(exp(power) - exponent(power, 5));
    double diff2 = abs(exp(power) - exponent(power, 10));
    ASSERT_LT(diff2, diff1);
}
