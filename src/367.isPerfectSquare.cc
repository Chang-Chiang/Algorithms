#include "headers.h"

/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] isPerfectSquare
 */

// @lc code=start
class Solution
{
public:
    bool isPerfectSquare(int num) {

        // mid = 0, 排除 0 除, num / mid
        if (num == 1) return true;

        int left = 0;
        int right = num;
        while (left < right) {
            int mid = left + ((right - left) >> 1);

            // double res = double(num) / mid;  // 整型除法结果会向下取整
            // if (res < mid) {
            //     right = mid;
            // }
            // else if (res > mid) {
            //     left = mid + 1;
            // }
            // else {
            //     return true;
            // }

            long square = (long) mid * mid;
            if (square < num) {
                left = mid + 1;
            } else if (square > num) {
                right = mid;
            } else {
                return true;
            }

        }
        return false;
    }
};
// @lc code=end

TEST(isPerfectSquare, isPerfectSquare_1)
{
    Solution s;

    // 输入
    int num = 16;

    // 实际输出
    bool res = s.isPerfectSquare(num);

    // 比较
    EXPECT_TRUE(res);
}

TEST(isPerfectSquare, isPerfectSquare_2)
{
    Solution s;

    // 输入
    int num = 8;

    // 实际输出
    bool res = s.isPerfectSquare(num);

    // 比较
    EXPECT_FALSE(res);
}

TEST(isPerfectSquare, isPerfectSquare_3)
{
    Solution s;

    // 输入
    int num = 1;

    // 实际输出
    bool res = s.isPerfectSquare(num);

    // 比较
    EXPECT_TRUE(res);
}

TEST(isPerfectSquare, isPerfectSquare_4)
{
    Solution s;

    // 输入
    int num = 5;

    // 实际输出
    bool res = s.isPerfectSquare(num);

    // 比较
    EXPECT_FALSE(res);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
