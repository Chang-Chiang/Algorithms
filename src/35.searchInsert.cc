#include "headers.h"

/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] searchInsert
 */

// @lc code=start
class Solution
{
public:
    // 暴力法
    // int searchInsert(vector<int>& nums, int target) {
    //     for (int i = 0; i < nums.size(); i++) {
    //         if (nums[i] >= target)
    //             return i;
    //     }
    //     return nums.size();
    // }

    // 二分搜索
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();

        while (left < right) {
            int mid = left + ((right - left) >> 1);
            if (nums[mid] > target) {
                right = mid;
            } 
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                return mid;
            }
        }
        return right;
    }
};
// @lc code=end

TEST(searchInsert, searchInsert_1)
{
    Solution s;

    // 输入
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    // 期望输出
    int ans = 2;

    // 实际输出
    int res = s.searchInsert(nums, target);

    // 比较
    EXPECT_EQ(res, ans);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}