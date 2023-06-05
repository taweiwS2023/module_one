#include "gtest/gtest.h"
#include "ModuleOne.h"

TEST(ModuleOneTest, testAdd) {
    ModuleOne mo;
    int result = mo.add(5, 3);
    EXPECT_EQ(result, 8);
}
