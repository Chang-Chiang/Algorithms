/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    void moveZeroes(vector<int>& nums) {

        vector<int> nonZeroElements;

        for (size_t i = 0; i < nums.size(); i++)  // 使用 size_t 而不是 int
            if (nums[i])
                nonZeroElements.push_back(nums[i]);

        for (size_t i = 0; i < nonZeroElements.size(); i++)
            nums[i] = nonZeroElements[i];

        for (size_t i = nonZeroElements.size(); i < nums.size(); i++)
            nums[i] = 0;
    }
};

// @lc code=end

int main() {

    int arr[] = {0, 1, 0, 3, 12};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

    for (size_t i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;

    Solution().moveZeroes(vec);

    for (size_t i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;
    // getchar();
    // system("pause");
    return 0;
}

