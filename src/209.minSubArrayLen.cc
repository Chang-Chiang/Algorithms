#include "headers.h"

/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] minSubArrayLen
 */

// @lc code=start
class Solution
{
public:
    // 时间复杂度 O(log n), 空间复杂度 O(1)
    int minSubArrayLen(int target, vector<int> &nums) {
        int res = INT32_MAX;
        int sum = 0;  // 滑动窗口数值之和
        int i = 0;   // 滑动窗口起始位置
        int subLength = 0;  // 滑动窗口的长度

        for (int j = 0; j < nums.size(); ++j) {
            sum += nums[j];

            while (sum >= target) {
                subLength = (j - i + 1);
                res = (res < subLength) ? res : subLength;
                sum -= nums[i];
                ++i;
            }
        }
        return res == INT32_MAX ? 0 : res;
    }
};
// @lc code=end

TEST(minSubArrayLen, minSubArrayLen_1)
{
    Solution s;

    // 输入
    int target = 7;
    vector<int> nums = {2, 3, 1, 2, 4, 3};

    // 期望输出
    int ans = 2;

    // 实际输出
    int res = s.minSubArrayLen(target, nums);

    // 比较
    EXPECT_EQ(res, ans);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}