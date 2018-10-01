/**
 * Tests for ex2 functions.
 * 
 * Copyright (c) 2018, Sekhar Ravinutala.
 */

#include <gtest/gtest.h>
#include "ex2/bottles.h"

TEST(ex2, lyric) {
    // Should give correct lyric for a number.
    ASSERT_EQ(lyric(45), "Forty-five bottles of beer on the wall,\n"
        "Forty-five bottles of beer.");

    // Should keep bottles singular when number is one.
    ASSERT_EQ(lyric(1), "One bottle of beer on the wall,\n"
        "One bottle of beer.");
}

TEST(ex2, word) {
    // Should give tens/singles digitis with right capitalization and hyphen.
    ASSERT_EQ(word(99), "Ninety-nine");

    // Should give full value when multiple of ten.
    ASSERT_EQ(word(70), "Seventy");

    // Should handle teens right.
    ASSERT_EQ(word(14), "Fourteen");

    // Should Capitalize single digit numbers right.
    ASSERT_EQ(word(6), "Six");

    // Should give value for zero without failing.
    ASSERT_EQ(word(0), "Zero");
}
