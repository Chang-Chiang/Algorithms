#include "headers.h"

/*
 * @lc app=leetcode.cn id=76 lang=cpp
 *
 * [76] minWindow
 */

// @lc code=start
class Solution {
public:
	unordered_map<char, int> ori, cnt;

	// 设字符集大小为 CCC
	// 时间复杂度 O(C⋅∣s∣+∣t∣), 空间复杂度 O(C)
	string minWindow(string s, string t) {

		// 建立 t 的哈希表
		for (const auto& c : t) {
			++ori[c];
		}

		int l = 0, r = -1;        // 滑窗左右指针
		int len = INT_MAX;        // 滑窗最小尺寸
		int ansL = -1, ansR = -1; // 最小滑窗的左右指针

		while (r < int(s.size())) {

			// 滑窗 右指针增加, 哈希表 find 没有对应元素则返回 map.end()
			r++;

			// 滑窗内有子串 t 对应元素, 增加其计数
			if (ori.find(s[r]) != ori.end()) {
				++cnt[s[r]];
			}

			// 窗口内已包含子串 t 所有字符, 滑窗左指针增加, 缩小滑窗
			while (check() && l <= r) {
				// 更新最小窗口
				if (r - l + 1 < len) {
					len = r - l + 1;
					ansL = l;
				}

				// 滑窗左侧内缩: 左侧字符频数减一, 滑窗 左指针增加
				if (ori.find(s[l]) != ori.end()) {
					--cnt[s[l]];
				}
				++l;
			}
		}

		// -1 表示未进入 while (check() && l <= r) 循环
		// 即 s 不存在包含 t 的子串
		return ansL == -1 ? string() : s.substr(ansL, len);
	}

	// 遍历窗口所存哈希频数
	bool check() {
		for (const auto& p : ori) {
			if (cnt[p.first] < p.second) {
				return false;
			}
		}
		return true;
	}
};
// @lc code=end

TEST(minWindow, minWindow_1) {
	Solution s;

	// 输入
	string s1 = {"ADOBECODEBANC"};
	string t1 = {"ABC"};

	// 期望输出
	string ans = {"BANC"};

	// 实际输出
	string res = s.minWindow(s1, t1);

	// 比较字符串相等 EXPECT_STREQ
    // 为了比较std::string你应该使用的 EXPECT_EQ
	EXPECT_EQ(res, ans);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}