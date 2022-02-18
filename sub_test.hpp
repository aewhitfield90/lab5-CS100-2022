#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"
#include "op.hpp"

TEST(SubTest, SubPosPos) {
    Op* nine = new Op(9);
    Op* ten = new Op(10);
    Sub* test = new Sub(nine, ten);
    EXPECT_EQ(test->evaluate(), -1);
    delete nine, ten, test;
}

TEST(SubTest, SubPosNeg) {
    Op* two = new Op(2);
    Op* neg_seven = new Op(-7);
    Sub* test = new Sub(two, neg_seven);
    EXPECT_EQ(test->evaluate(), 9);
    delete two, neg_seven, test;
}

TEST(SubTest, SubPosZero) {
    Op* four = new Op(4);
    Op* zero = new Op(0);
    Sub* test = new Sub(four, zero);
    EXPECT_EQ(test->evaluate(), 4);
    delete four, zero, test;
}

TEST(SubTest, SubOperatorOperand) {
    Op* five = new Op(5);
    Op* seven = new Op(7);
    Sub* minus = new Sub(five, seven);
    EXPECT_EQ(minus->evaluate(), -2);
    Sub* test = new Sub(five, minus);
    EXPECT_EQ(test->evaluate(), 7);
    delete five, seven, minus, test;
}

#endif //__SUB_TEST_HPP__
