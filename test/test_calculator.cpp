#include <gtest/gtest.h>
#include "TestCalculator.h"

TEST_F(TestCalculator, add)
{
    EXPECT_EQ(9.0, calc_->add(5.2, 3.8));
}

TEST_F(TestCalculator, substract)
{
    ASSERT_DOUBLE_EQ(2.0, calc_->substract(5.2, 3.2));
}

int main(int argc, char ** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
