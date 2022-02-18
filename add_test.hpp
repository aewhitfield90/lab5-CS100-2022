#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"
#include "op.hpp"

TEST(AddTest, AddPosPos) {
    Op* nine = new Op(9);
    Op* ten = new Op(10);
    Add* test = new Add(nine, ten);
    EXPECT_EQ(test->evaluate(), 19);
    delete nine, ten, test;
}

TEST(AddTest, AddPosNeg) {
    Op* two = new Op(2);
    Op* neg_seven = new Op(-7);
    Add* test = new Add(two, neg_seven);
    EXPECT_EQ(test->evaluate(), -5);
    delete two, neg_seven, test;
}

TEST(AddTest, AddPosZero) {
    Op* four = new Op(4);
    Op* zero = new Op(0);
    Add* test = new Add(four, zero);
    EXPECT_EQ(test->evaluate(), 4);
    delete four, zero, test;
}

TEST(AddTest, AddOperatorOperand) {
    Op* five = new Op(5);
    Op* seven = new Op(7);
    Add* sum = new Add(five, seven);
    EXPECT_EQ(sum->evaluate(), 12);
    Add* test = new Add(five, sum);
    EXPECT_EQ(test->evaluate(), 17);
    delete five, seven, sum, test;
}

#endif //__ADD_TEST_HPP__
