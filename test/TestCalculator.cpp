#include "TestCalculator.h"

void TestCalculator::SetUp()
{
    calc_ = std::make_shared<Calculator>();
}
void TestCalculator::TearDown()
{
    calc_.reset();
}
