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

int playMultiple(int money, int count) {
    for (int i = 0; i < count && money > 0; ++i) {
        money = play(money, i);
    }

    return money;
}

TEST(ex4, play) {
    int money;

    // Since this is random, try many times.
    for (int i = 0; i < 100; ++i) {
        // Should lose some money after many attempts.
        money = MONEY();
        ASSERT_LT(playMultiple(money, 100), money);

        // Should lose everything after playing very long (house always wins)
        money = MONEY();
        ASSERT_EQ(playMultiple(money, 10000), 0);

        // Should not more than double in one wager.
        money = MONEY();
        ASSERT_LE(playMultiple(money, 1), 2 * money);
    }
}
