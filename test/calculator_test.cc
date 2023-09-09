// Copyright 2023 Nazmus Saquib

#include <gtest/gtest.h>

#include "src/calculator.h"

namespace {
class CalculatorTest : public testing::Test {
 protected:
  calculator::Calculator calc;
};

TEST_F(CalculatorTest, AdditionReturnsCorrectResult) {
    EXPECT_EQ(5, calc.add(2, 3));
}

TEST_F(CalculatorTest, SubtractionReturnsCorrectResult) {
    EXPECT_EQ(-1, calc.sub(2, 3));
}
}  // namespace

