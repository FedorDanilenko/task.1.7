#include <gtest/gtest.h>

#include "my_regex.hxx"

using namespace my_regex;

TEST(regex, vowels) {
    std::string path{"../../tests/text/vowel_test_1.txt"};
    auto count = CountVowels(path);
    unsigned exp_count = 2;
    EXPECT_EQ(exp_count, count);
}

TEST(regex, single) {
    std::string path{"../../tests/text/single_test_1.txt"};
    auto count = CountSingleLetWords(path);
    unsigned exp_count = 4;
    EXPECT_EQ(exp_count, count);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
