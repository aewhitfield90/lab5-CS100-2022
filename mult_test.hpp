#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"
#include "op.hpp"
#include "add.hpp"

TEST(MultTest, MultiplyTwoOperators) {
    Op* five = new Op(5);
    Op* seven = new Op(7);
    Mult* test = new Mult(five, seven);
    EXPECT_EQ(test->evaluate(), 35);
}

/*TEST(MultTest, MultiplyTwoOperators) {
    Op* zero = new Op(0);
    Op* seven = new Op(7);
    Mult* test = new Mult(zero, seven);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTest, MultiplyOperatorOperand) {
    Op* five = new Op(5);
    Op* seven = new Op(7);
    Add* sum = new Add(five, seven)
    EXPECT_EQ(test->evaluate(), 12);
    Mult* test = new Mult(five, sum);
    EXPECT_EQ(test->evaluate(), 60);
}*/

#endif //__OP_TEST_HPP__
