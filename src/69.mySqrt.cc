#include "headers.h"

/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] mySqrt
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }

        int left = 0;
        int right = x;
        while (left < right) {
            int mid = left + ((right - left) >> 1);
            // if (mid * mid > x) {  // mid * mid 整型溢出
            if (x / mid < mid) {
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }
        return left - 1;
    }
};
// @lc code=end

TEST(mySqrt, mySqrt_1)
{
    Solution s;

    // 输入
    int x = 8;

    // 期望输出
    int ans = 2;

    // 实际输出
    int res = s.mySqrt(x);

    // 比较
    EXPECT_EQ(res, ans);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}