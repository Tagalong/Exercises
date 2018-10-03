/**
 * Tests for ex4 functions.
 * 
 * Copyright (c) 2018, Sekhar Ravinutala.
 */

#include <gtest/gtest.h>
#include <random>
#include "ex4/blackjack.h"

std::default_random_engine engine;
std::uniform_int_distribution<> moneyDistribution(100, 1000);
#define MONEY() (moneyDistribution(engine))

TEST(ex4, play) {
    int money;

    // Since this is random, try many times.
    for (int i = 0; i < 100; ++i) {
        // Should lose some money after many attempts.
        money = MONEY();
        ASSERT_LT(play(money, 100), money);

        // Should not more than double in one wager.
        money = MONEY();
        ASSERT_LE(play(money, 1), 2 * money);
    }
}
