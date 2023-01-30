#include "headers.h"

/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] removeElement
 */

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val) {
        int left = 0;
        int right = nums.size();

        while (left < right) {

            if (nums[left] == val) {
                nums[left] = nums[right - 1];
                right--;
            }
            else left++;
        }
        return left;
    }
};
// @lc code=end

TEST(removeElement, removeElement_1)
{
    Solution s;

    // 输入
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    // 期望输出
    int ans_len = 2;
    vector<int> ans_nums = {2, 2};
    
    int removed_len = s.removeElement(nums, val);
    vector<int> removed_nums;
    for (unsigned int i = 0; i < ans_len; ++i) {
        removed_nums.push_back(nums[i]);
    }

    EXPECT_EQ(removed_len, ans_len);
    EXPECT_EQ(removed_nums, ans_nums);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}