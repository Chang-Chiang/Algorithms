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
    // 双指针法一, 时间复杂度 O(n), 空间复杂度 O(1)
    // 快慢指针, 不改变元素相对位置
    int removeElement(vector<int> &nums, int val) {
        int slowIndex = 0;  // 要赋值的位置
        for (int fastIndex = 0; fastIndex < nums.size(); ++fastIndex) {
            if (nums[fastIndex] != val) {
                nums[slowIndex] = nums[fastIndex];
                ++slowIndex;
            }
        }
        return slowIndex;
    }

    // 双指针法二, 时间复杂度 O(n), 空间复杂度 O(1)
    // 相向指针, 改变元素相对位置
    // int removeElement(vector<int> &nums, int val) {
    //     int left = 0;
    //     int right = nums.size();

    //     while (left < right) {

    //         if (nums[left] == val) {
    //             nums[left] = nums[right - 1];
    //             right--;
    //         }
    //         else left++;
    //     }
    //     return left;
    // }

    // 暴力求解
    // int removeElement(vector<int>& nums, int val) {
    //     int size = nums.size();
    //     for (int i = 0; i < size; i++) {
    //         if (nums[i] == val) {  // 发现需要移除的元素，就将数组集体向前移动一位
    //             for (int j = i + 1; j < size; j++) {
    //                 nums[j - 1] = nums[j];
    //             }
    //             i--;  // 因为下标 i 以后的数值都向前移动了一位，所以 i 也向前移动一位
    //             size--;  // 此时数组的大小-1
    //         }
    //     }
    //     return size;
    // }
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