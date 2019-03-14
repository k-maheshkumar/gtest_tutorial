#ifndef TESTCALCULATOR_H
#define TESTCALCULATOR_H

#include <gtest/gtest.h>
#include <memory>
#include "Calculator.hpp"


struct TestCalculator : public testing::Test
{
    void SetUp();
    void TearDown();

    std::shared_ptr<Calculator> calc_;

};

#endif // TESTCALCULATOR_H
