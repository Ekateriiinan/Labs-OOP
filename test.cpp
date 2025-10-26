#include "To_Binary.h"
#include <gtest/gtest.h>
#include <vector>

TEST(ToBinaryTest, ZeroTest) {
    std::vector<int> expected = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    std::vector<int> result = ToBinaryArray(0);
    EXPECT_EQ(result, expected);
}

TEST(ToBinaryTest, NormalNumberTest) {
    std::vector<int> expected = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1};
    std::vector<int> result = ToBinaryArray(5);
    EXPECT_EQ(result, expected);
}

TEST(ToBinaryTest, MaxUnsignedIntTest) {
    std::vector<int> expected(32, 1);
    std::vector<int> result = ToBinaryArray(4294967295);
    EXPECT_EQ(result, expected);
}

TEST(ToBinaryTest, MixedBitsTest) {
    std::vector<int> expected = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1};
    std::vector<int> result = ToBinaryArray(255);
    EXPECT_EQ(result, expected);
}

TEST(ToBinaryTest, VectorSizeTest) {
    std::vector<int> result = ToBinaryArray(123);
    EXPECT_EQ(result.size(), 32);
}