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

#define HIT() (rand() % 2 > 0.5)//returns 0 or 1
#define ROLL() VALUES[rand() % 13]//roll randomizes the array and gives a roll value from the array
#define WAGER(money) (std::max(1, rand() % money)) //returns a value that is max 1 and money - 1 
int play(uint16_t money, int seed) {

    srand(seed);
    /**
     * Play with one wager and return remaining money.
     * - money: Total money with player.
     * - seed: Seed to randomize behavior.
     */
   


    int playerRoll1 = ROLL();
    int playerRoll2 = ROLL();
    int houseRoll1 = ROLL();

    int totalRoll = playerRoll1 + playerRoll2;
    bool hitAgain;
    std::cout << "Your rolls are: " << totalRoll << std::endl;
    std::cout << "The house roll is: " << houseRoll1 << std::endl;

    if(totalRoll >= 22){
        std::cout << "Bust!" << std::endl; //how to end function and return to main?
    }

    if(totalRoll < 21){
        std::cout << "Hit again? 1 for yes, 0 for no." << endl;
        std::cin >> hitAgain;
    }
    





}


