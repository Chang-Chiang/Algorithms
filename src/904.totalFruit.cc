#include "headers.h"

/*
 * @lc app=leetcode.cn id=904 lang=cpp
 *
 * [904] totalFruit
 */

// @lc code=start
class Solution {
public:
	// 时间复杂度 O(n), 空间复杂度 O(1)
	int totalFruit(vector<int>& fruits) {
		int n = fruits.size();
		unordered_map<int, int> cnt;

		int left = 0, ans = 0;
		for (int right = 0; right < n; ++right) {
			++cnt[fruits[right]];

			// 只有两个篮子
			while (cnt.size() > 2) {
				unordered_map<int, int>::iterator it = cnt.find(fruits[left]);
				--(it->second);

				if (it->second == 0) {
					cnt.erase(it);
				}
				++left;
			}
			ans = max(ans, right - left + 1);
		}
		return ans;
	}
};
// @lc code=end

TEST(totalFruit, totalFruit_1) {
	Solution s;

	// 输入
	vector<int> in = {3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4};

	// 期望输出
	int ans = 5;

	// 实际输出
	int res = s.totalFruit(in);

	// 比较
	EXPECT_EQ(res, ans);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}