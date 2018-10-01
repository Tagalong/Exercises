/**
 * Run ex4.
 *
 * Copyright (c) 2018, Sekhar Ravinutala.
 */

#include "ex4/run.h"
#include <iostream>
#include "ex4/blackjack.h"

void ex4::run() {
    uint16_t money, wagers;

    std::cout << "Enter money wagers" << std::endl;
    std::cin >> money >> wagers;

    for (; money > 0 && wagers > 0; --wagers) {
        // Use money + wagers as seed to randomize results.
        money = play(money, money + wagers);
    }

    std::cout << "Money after plays: " << money << std::endl;
}
