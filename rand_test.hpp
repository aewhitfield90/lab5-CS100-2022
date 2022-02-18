#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandValueString) {
    Rand* test = new Rand();
    EXPECT_EQ(test->stringify(), std::to_string(test->evaluate()));
}

#endif //__RAND_TEST_HPP__
