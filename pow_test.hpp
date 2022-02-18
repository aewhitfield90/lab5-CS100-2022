#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"
#include "op.hpp"

TEST(PowTest, PosPower) {
    Op* five = new Op(5);
    Op* three = new Op(3);
    Pow* test = new Pow(five, three);
    EXPECT_EQ(test->evaluate(), 125);
    delete five, three, test;
}

TEST(PowTest, NegPower) {
    Op* two = new Op(2);
    Op* neg_two = new Op(-2);
    Pow* test = new Pow(two, neg_two);
    EXPECT_EQ(test->evaluate(), 0.25);
    delete two, neg_two, test;
}

TEST(PowTest, NegNumPower) {
    Op* three = new Op(3);
    Op* neg_two = new Op(-2);
    Pow* test = new Pow(neg_two, three);
    EXPECT_EQ(test->evaluate(), -8);
    delete three, neg_two, test;
}

TEST(PowTest, PowOperatorOperand) {
    Op* five = new Op(5);
    Op* zero = new Op(0);
    Pow* power = new Pow(five, zero);
    EXPECT_EQ(power->evaluate(), 1);
    Pow* test = new Pow(five, power);
    EXPECT_EQ(test->evaluate(), 5);
    delete five, zero, power, test;
}

#endif //__POW_TEST_HPP__
