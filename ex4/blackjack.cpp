/**
 * Blackjack.
 *
 * Copyright (c) 2018, Sekhar Ravinutala.
 */

#include "ex4/blackjack.h"
#include <cassert>
#include <random>
#include <algorithm>

static const int VALUES[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};

#define HIT() (rand() % 2 > 0.5)
#define ROLL() VALUES[rand() % 13]
#define WAGER(money) (std::max(1, rand() % money))

int play(uint16_t money, int seed) {
    /**
     * Play with one wager and return remaining money.
     * - money: Total money with player.
     * - seed: Seed to randomize behavior.
     */
}
