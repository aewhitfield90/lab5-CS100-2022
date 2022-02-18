#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"
#include "add.hpp"

TEST(MultTest, MultiplyTwoOperators) {
    Base* five = new Op(5);
    Base* seven = new Op(7);
    Base* test = new Mult(five, seven);
    EXPECT_EQ(test->evaluate(), 35);
    delete five, seven, test;
}

TEST(MultTest, MultiplyOperatorZero) {
    Base* zero = new Op(0);
    Base* seven = new Op(7);
    Base* test = new Mult(zero, seven);
    EXPECT_EQ(test->evaluate(), 0);
    delete zero, seven, test;
}

TEST(MultTest, MultiplyOperatorOperand) {
    Base* five = new Op(5);
    Base* seven = new Op(7);
    Base* sum = new Add(five, seven)
    EXPECT_EQ(sum->evaluate(), 12);
    Base* test = new Mult(five, sum);
    EXPECT_EQ(test->evaluate(), 60);
    delete five, seven, sum, test;
}

#endif //__MULT_TEST_HPP__
