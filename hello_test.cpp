#include <gtest/gtest.h>

extern "C" {
#include "test.h"
}

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}

TEST(HelloTest, CustomSum) {
    EXPECT_EQ(1 + 1, custom_sum(1, 1)) << "this will pass";
    
    EXPECT_EQ(2 + 1, custom_sum(2, 1)) << "this should be 3"; 
}
