#include "headers.h"

/*
 * @lc app=leetcode.cn id=0 lang=cpp
 *
 * [0] isValid
 */

// @lc code=start
class Solution
{
public:
    int isValid(vector<int> &nums) {
        return 1;
    }
};
// @lc code=end

TEST(isValid, isValid_1)
{
    Solution s;

    // 输入
    vector<int> in = {1, 2, 3};

    // 期望输出
    int ans = 1;

    // 实际输出
    int res = s.isValid(in);

    // 比较
    EXPECT_EQ(res, ans);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}