/**
 * Run ex2.
 *
 * Copyright (c) 2018, Sekhar Ravinutala.
 */

#include "ex2/run.h"
#include <iostream>
#include "ex2/bottles.h"

void ex2::run() {
    for (int i = 99; i >= 0; --i) {
        std::cout << lyric(i) << std::endl;
    }
}
