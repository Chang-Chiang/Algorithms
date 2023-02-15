#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

/*
 * @lc app=leetcode.cn id=0 lang=cpp
 *
 * [0] isValid_debug
 */

// @lc code=start
class Solution
{
public:
    // 时间复杂度 O(log n), 空间复杂度 O(1)
    int isValid(vector<int> &nums) {
        return 1;
    }
};
// @lc code=end

int main() {
    Solution s;
    vector<int> nums;
    int res;
    res = s.isValid(nums);
    cout << res << endl;
    return 1;
}