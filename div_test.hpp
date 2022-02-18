#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"
#include "add.hpp"
#include "op.hpp"

TEST(DivTest, DivideTwoOperators) {
    Op* twenty = new Op(20);
    Op* five = new Op(5);
    Div* test = new Div(twenty, five);
    EXPECT_EQ(test->evaluate(), 4);
    delete twenty, five, test;
}

TEST(DivTest, DivideOperatorZero) {
    Op* zero = new Op(0);
    Op* seven = new Op(7);
    Div* test = new Div(zero, seven);
    EXPECT_EQ(test->evaluate(), 0);
    delete zero, seven, test;
}

TEST(DivTest, DivideOperatorOperand) {
    Op* four = new Op(4);
    Op* eight = new Op(8);
    Add* sum = new Add(four, eight);
    EXPECT_EQ(sum->evaluate(), 12);
    Div* test = new Div(sum, four);
    EXPECT_EQ(test->evaluate(), 3);
    delete four, eight, sum, test;
}

#endif //__DIV_TEST_HPP__
