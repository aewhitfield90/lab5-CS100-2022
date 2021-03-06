#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpStringNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ("8.000000", test->stringify());
}

TEST(OpTest, OpEvaluateNegative) {
    Op* test = new Op(-5);
    EXPECT_EQ(test->evaluate(), -5);
}

#endif //__OP_TEST_HPP__
