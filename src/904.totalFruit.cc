#include "headers.h"

/*
 * @lc app=leetcode.cn id=904 lang=cpp
 *
 * [904] totalFruit
 */

// @lc code=start
class Solution
{
public:
    // 时间复杂度 O(log n), 空间复杂度 O(1)
    int totalFruit(vector<int>& fruits) {

    }
};
// @lc code=end

TEST(totalFruit, totalFruit_1)
{
    Solution s;

    // 输入
    vector<int> fruits = {1, 2, 1};

    // 期望输出
    int ans = 3;

    // 实际输出
    int res = s.totalFruit(fruits);

    // 比较
    EXPECT_EQ(res, ans);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}