#include "headers.h"

/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] searchRange
 */

// @lc code=start
class Solution
{
private:
    int lower_bound(vector<int> &nums, int target) {
        int left = 0, right = nums.size(); 
        while (left < right) { 
            int mid = left + (right - left) / 2;
            if (nums[mid] < target)
                left = mid + 1; 
            else
                right = mid; 
        }
        return left; 
    }

public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int start = lower_bound(nums, target);
        if (start == nums.size() || nums[start] != target)
            return {-1, -1};
        int end = lower_bound(nums, target + 1) - 1;
        return {start, end};
    }
};
// @lc code=end

TEST(searchRange, searchRange_1)
{
    Solution s;

    // 输入
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    // 期望输出
    vector<int> ans = {3, 4};

    // 实际输出
    vector<int> res = s.searchRange(nums, target);

    // 比较
    EXPECT_EQ(res, ans);
}

TEST(searchRange, searchRange_2)
{
    Solution s;

    // 输入
    vector<int> nums = {2, 2};
    int target = 3;

    // 期望输出
    vector<int> ans = {-1, -1};

    // 实际输出
    vector<int> res = s.searchRange(nums, target);

    // 比较
    EXPECT_EQ(res, ans);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}