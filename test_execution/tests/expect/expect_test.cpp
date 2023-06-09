#include <gtest/gtest.h>
#include <string>
#include "cppbdd/expect.hpp"

using namespace std;

TEST(Expect, Expect_True) {
    ::testing::internal::CaptureStdout();
    bool ret = cppbdd::internal::Expect(true);
    string output = ::testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "  - Passed!\n");
    EXPECT_TRUE(ret);
}

TEST(Expect, Expect_False) {
    bool ret = cppbdd::internal::Expect(false);

    EXPECT_FALSE(ret);
}
