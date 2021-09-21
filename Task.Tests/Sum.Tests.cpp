#include <gtest/gtest.h>
#include "../Task/Sum.h"

TEST(SumTests, TwoPositiveNumbers)
{
int actual = Sum(5, 10);
ASSERT_EQ(actual, 15);
}
TEST(SumTests, PositiveAndNegativeNumbers)
{
int actual = Sum(5, -10);
ASSERT_EQ(actual, -5);
}

