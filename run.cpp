/**
 * Run all the exercises.
 * 
 * Copyright (c) 2018, Sekhar Ravinutala.
 */

#include <iostream>
#include <csignal>
#include "ex1/run.h"
#include "ex2/run.h"
#include "ex3/run.h"
#include "ex4/run.h"

int main(int argc, char *argv[]) {
    // Exit with -1 on abort (mainly assertion failure).
    std::signal(SIGABRT, [](int signal) {
        exit(-1);
    });

    auto showUsage = []() {
        std::cerr << "Usage: run 1|2|3" << std::endl;
    };
    if (argc == 2) {
        switch (std::atoi(argv[1])) {
            case 1:
                ex1::run();
                break;
            case 2:
                ex2::run();
                break;
            case 3:
                ex3::run();
                break;
            case 4:
                ex4::run();
                break;
            default:
                showUsage();
                break;
        }
    } else {
        showUsage();
    }
}
