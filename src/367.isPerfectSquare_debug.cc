#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] isPerfectSquare_debug
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
            double res = double(num) / mid;
            if (res < mid) {
                right = mid;
            }
            else if (res > mid) {
                left = mid + 1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

int main() {
    Solution s;
    int num = 4;
    int res;
    res = s.isPerfectSquare(num);
    cout << res << endl;
    // return 1;
}