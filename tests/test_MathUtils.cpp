#include <gtest/gtest.h>
#include "WarGame2/MathUtils.h"

TEST(MathUtilsTest, Add) {
    EXPECT_EQ(WarGame2::MathUtils::Add(2, 3), 5);
    EXPECT_EQ(WarGame2::MathUtils::Add(-1, 1), 0);
    EXPECT_EQ(WarGame2::MathUtils::Add(0, 0), 0);
}
