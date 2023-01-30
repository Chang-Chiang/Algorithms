#include "headers.h"

/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] search
 */
// @lc code=start
class Solution
{
public:
    int search(vector<int> &nums, int target) {

        // 左闭右开 [left, right)
        int left = 0;
        int right = nums.size();  // 元素个数 n = nums.size() ∈ [1, 10000]

        while (left < right) {

            // int, 4个字节, 32 位, 表示范围: -2^31 ~ 2^31-1, -2147483648 ~ 2147483647
            // int mid = (left + right) / 2;  // 防止 (left + right) 溢出
            // int mid = left + (right - left) / 2;  // 编译器会优化为 >> 1
            int mid = left + ((right - left) >> 1);  // 位运算操作符, 优化程序运行速度, 算术运算符高于位移运算符 !!!

            if (nums[mid] < target) {
                left = mid + 1;
            }
            else if (nums[mid] > target) {
                right = mid;
            }
            else {
                return mid;
            }      
        }
        return -1;
    }
};
// @lc code=end

TEST(search, search_1)
{
    Solution s;

    // 输入
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    // 期望输出
    int ans = 4;

    // 实际输出
    int res = s.search(nums, target);

    // 比较
    EXPECT_EQ(res, ans);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
