#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, MultiplyTwoOperators) {
    Base* five = new Op(5);
    Base* seven = new Op(7);
    Base* test = new Mult(five, seven);
    EXPECT_EQ(test->evaluate(), 35);
}

TEST(MultTest, MultiplyTwoOperators) {
    Base* zero = new Op(0);
    Base* seven = new Op(7);
    Base* test = new Mult(zero, seven);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTest, MultiplyOperatorOperand) {
    Base* five = new Op(5);
    Base* seven = new Op(7);
    Base* sum = new Add(five, seven)
    EXPECT_EQ(test->evaluate(), 12);
    Base* test = new Mult(five, sum);
    EXPECT_EQ(test->evaluate(), 60);
}

#endif //__OP_TEST_HPP__
