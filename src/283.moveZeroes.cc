#include "headers.h"

/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] moveZeroes
 */

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums) {
        int slowIndex = 0;
        int fastIndex = 0;

        while (fastIndex < nums.size()) {
            if (nums[fastIndex] != 0) {
                swap(nums[fastIndex], nums[slowIndex]);
                ++slowIndex;
            }
            fastIndex++;
        }

        // for (int fastIndex = 0; fastIndex < nums.size(); ++fastIndex) {
        //     if (nums[fastIndex] != 0) {
        //         swap(nums[fastIndex], nums[slowIndex]);
        //         // int tmp = nums[slowIndex];
        //         // nums[slowIndex] = nums[fastIndex];
        //         // nums[fastIndex] = tmp;
        //         ++slowIndex;
        //     }
        // }
    }
};
// @lc code=end

TEST(moveZeroes, moveZeroes_1)
{
    Solution s;

    // 输入
    vector<int> nums = {0, 1, 0, 3, 12};

    // 期望输出
    vector<int> ans = {1, 3, 12, 0, 0};

    // 实际输出
    s.moveZeroes(nums);

    // 比较
    EXPECT_EQ(nums, ans);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}