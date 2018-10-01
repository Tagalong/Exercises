/**
 * Bottles implementation.
 *
 * Copyright (c) 2018, Sekhar Ravinutala.
 */

#include "ex2/bottles.h"
#include <assert.h>
#include <locale>

std::string lyric(uint8_t bottles) {
    /**
     * Get lyric line for specified number of bottles.
     * - bottles: Bottle count.
     */
    auto bottlesPart = word(bottles) +
        (bottles == 1 ? " bottle" : " bottles") + " of beer";

    return bottlesPart + " on the wall,\n" + bottlesPart + ".";
}

std::string word(uint8_t number) {
    /**
     * Convert number into word.
     * - number: Should be below 100.
     */
    assert(number < 100);

    static const std::string DOUBLES[] = {
        "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty",
        "Ninety"
    };
    static const std::string SINGLES[] = {
        "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight",
        "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
        "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };
    static const auto TO_LOWER = [](std::string str) {
        str[0] += 0x20;

        return str;
    };

    if (number < 20) {
        return SINGLES[number];
    } else {
        auto single = number % 10;
        auto singleWord = single == 0 ? "" : "-" + TO_LOWER(SINGLES[single]);

        return DOUBLES[number / 10 - 2] + singleWord;
    }
}
