#ifndef TST_QUADEQ_H
#define TST_QUADEQ_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

float x[2];

TEST(twoRoot, num1) {
    ASSERT_EQ(quadeq(1, 2, -3, x), 2);
    ASSERT_FLOAT_EQ(*x, -3);
    ASSERT_FLOAT_EQ(*(x + 1), 1);
}

TEST(twoRoot, num2) {
    ASSERT_EQ(quadeq(2, -2, -12, x), 2);
    ASSERT_FLOAT_EQ(*x, -2);
    ASSERT_FLOAT_EQ(*(x + 1), 3);
}

TEST(twoRoot, num3) {
    ASSERT_EQ(quadeq(-6, 3, 18, x), 2);
    ASSERT_FLOAT_EQ(*x, -1.5);
    ASSERT_FLOAT_EQ(*(x + 1), 2);
}

TEST(oneRoot, num1) {
    ASSERT_EQ(quadeq(2.5, -5, 2.5, x), 1);
    ASSERT_FLOAT_EQ(*x, 1);
}

TEST(oneRoot, num2) {
    ASSERT_EQ(quadeq(2, 4, 2, x), 1);
    ASSERT_FLOAT_EQ(*x, -1);
}

TEST(zeroRoot, num1) {
    ASSERT_EQ(quadeq(10, 6, 4, x), 0);
}

TEST(zeroRoot, num2) {
    ASSERT_EQ(quadeq(-5, 7, -2.5, x), 0);
}

TEST(incorrect, num1) {
    ASSERT_EQ(quadeq(0, 1, -1, x), -1);
}

TEST(zeroBC, num1) {
    ASSERT_EQ(quadeq(4, 0, -81, x), 2);
    ASSERT_FLOAT_EQ(*x, -4.5);
    ASSERT_FLOAT_EQ(*(x + 1), 4.5);
}

TEST(zeroBC, num2) {
    ASSERT_EQ(quadeq(9, 225, 0, x), 2);
    ASSERT_FLOAT_EQ(*x, -25);
    ASSERT_FLOAT_EQ(*(x + 1), 0);
}

TEST(zeroBC, num3) {
    ASSERT_EQ(quadeq(42, 0, 0, x), 1);
    ASSERT_FLOAT_EQ(*x, 0);
}

#endif // TST_QUADEQ_H
