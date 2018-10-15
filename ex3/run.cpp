/**
 * Run ex3.
 *
 * Copyright (c) 2018, Sekhar Ravinutala.
 */

#include "ex3/run.h"
#include <iostream>
#include <string>
#include "ex3/time.h"

void ex3::run() {

    int startHours, startMinutes, futureMinutes, futureHours;
    bool startIsAm, futureIsAm;
  
    /**
     * Get start and future times (hours, minutes, AM|PM) from user and call
     * timeDifference() to get the time difference in minutes to show to user.
     * Note that you will need to convert the input strings "AM" (or "PM") into
     * apprpriate boolean values for passing to timeDifference().
     */

    std::cout << "Enter a start hour" << std::endl;
    std::cin >> startHours;
    std::cout << "Enter start minutes" << std::endl;
    std::cin >> startMinutes;
    std::cout << "Enter start AM or PM: 1 if AM, 0 if PM" << std::endl;
    std::cin >> startIsAm;

    std::cout << "Enter a future hour" << std::endl;
    std::cin >> futureHours;
    std::cout << "Enter future minutes" << std::endl;
    std::cin >> futureMinutes;
    std::cout << "Enter future AM or PM: 1 if AM, 0 if PM" << std::endl;
    std::cin >> futureIsAm;


    int difference = computeDifference(startHours, startMinutes, startIsAm, futureHours, futureMinutes, futureIsAm);
    std::cout << "The difference is " << difference << std::endl;
}
