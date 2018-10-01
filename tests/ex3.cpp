/**
 * Tests for ex3 functions.
 * 
 * Copyright (c) 2018, Sekhar Ravinutala.
 */

#include <gtest/gtest.h>
#include <assert.h>
#include "ex3/time.h"

TEST(ex3, computeDifference) {
    // Should return 0 for same time.
    ASSERT_EQ(computeDifference(1, 0, false, 1, 0, false), 0);
    ASSERT_EQ(computeDifference(12, 30, true, 12, 30, true), 0);

    // Should give correct difference on same day.
    ASSERT_EQ(computeDifference(10, 20, true, 12, 20, false), 120);
    ASSERT_EQ(computeDifference(11, 30, true, 4, 40, false), 310);

    // Should be able to tell day change.
    ASSERT_EQ(computeDifference(8, 10, false, 12, 20, true), 250);
    ASSERT_EQ(computeDifference(9, 50, true, 9, 49, true), 1439);
}
