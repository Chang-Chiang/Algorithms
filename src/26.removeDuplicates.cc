#include "headers.h"

/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] removeDuplicates
 */

// @lc code=start
class Solution
{
public:

    // 快慢指针, for 循环
    int removeDuplicates(vector<int> &nums) {

        int len = nums.size();  // size_t, unsigned long
        if (len == 0) return 0;

        int slowIndex = 0;
        for (int fastIndex = 1; fastIndex < len; ++fastIndex) {
            if (nums[fastIndex] != nums[slowIndex]) {
                nums[slowIndex + 1] = nums[fastIndex];
                ++slowIndex;
            } 
        }
        return slowIndex + 1;
    }

    // // 快慢指针, while 循环
    // int removeDuplicates(vector<int> &nums) {

    //     int len = nums.size();  // size_t, unsigned long
    //     if (len == 0) return 0;

    //     int slowIndex = 0;
    //     int fastIndex = 1;
    //     while (fastIndex < len) {
    //         if (nums[fastIndex] != nums[slowIndex]) {
    //             nums[slowIndex++] = nums[fastIndex];
    //         }
    //         ++fastIndex;
    //     }
    //     return slowIndex + 1;
    // }

};
// @lc code=end

TEST(removeDuplicates, removeDuplicates_1)
{
    Solution s;

    // 输入
    vector<int> nums = {1, 1, 2};

    // 期望输出
    int ans_len = 2;
    vector<int> ans_nums = {1, 2};

    // 实际输出
    int res_len = s.removeDuplicates(nums);
    // vector<int> res_nums;  

    // 比较
    EXPECT_EQ(res_len, ans_len);
    for (int i = 0; i < ans_len; i++) {
        EXPECT_EQ(nums[i], ans_nums[i]);
    }
}

TEST(removeDuplicates, removeDuplicates_2)
{
    Solution s;

    // 输入
    vector<int> nums = {};

    // 期望输出
    int ans_len = 0;
    vector<int> ans_nums = {};

    // 实际输出
    int res_len = s.removeDuplicates(nums);
    // vector<int> res_nums;  

    // 比较
    EXPECT_EQ(res_len, ans_len);
    for (int i = 0; i < ans_len; i++) {
        EXPECT_EQ(nums[i], ans_nums[i]);
    }
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}   