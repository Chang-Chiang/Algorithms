#include "headers.h"

/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] sortedSquares
 */

// @lc code=start
class Solution
{
public:

    // 平方后直接排序
    // 时间复杂度 O(n log n), 空间复杂度 O(log n)
    // vector<int> sortedSquares(vector<int>& nums) {
    //     vector<int> ans;
    //     for (int num: nums) {
    //         ans.push_back(num * num);
    //     }
    //     sort(ans.begin(), ans.end());
    //     return ans;
    // }

    // 双指针, 相向指针
    // 时间复杂度 O(n), 空间复杂度 O(1)
    vector<int> sortedSquares(vector<int> &nums) {
        int n = nums.size();
        int left = 0, right = n;
        vector<int> res(n);
        int pos = n - 1;
        while (left < right) {
            if (nums[left] * nums[left] > nums[right - 1] * nums[right - 1]) {
                res[pos] = nums[left] * nums[left];
                ++left;
            }
            else {
                res[pos] = nums[right - 1] * nums[right - 1];
                --right;
            }
            --pos;
        }
        return res;
    }
};
// @lc code=end

TEST(sortedSquares, sortedSquares_1)
{
    Solution s;

    // 输入
    vector<int> nums = {-4, -1, 0, 3, 10};

    // 期望输出
    vector<int> ans = {0, 1, 9, 16, 100};

    // 实际输出
    vector<int> res = s.sortedSquares(nums);

    // 比较
    EXPECT_EQ(res, ans);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}