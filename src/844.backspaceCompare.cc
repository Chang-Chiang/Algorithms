#include "headers.h"

/*
 * @lc app=leetcode.cn id=844 lang=cpp
 *
 * [844] backspaceCompare
 */

// @lc code=start
class Solution
{
public:

    // 双指针
    // bool backspaceCompare(string s, string t) {
    //     int s_idx = s.length() - 1, s_bs_cnt = 0;
    //     int t_idx = t.length() - 1, t_bs_cnt = 0;

    //     while (s_idx >= 0 || t_idx >= 0) {

    //         // 逆序遍历 s 字符串
    //         while (s_idx >= 0) {
    //             if (s[s_idx] == '#') {
    //                 ++s_bs_cnt;
    //                 --s_idx;
    //             }
    //             else if (s_bs_cnt > 0) {
    //                 --s_bs_cnt;
    //                 --s_idx;
    //             }
    //             else {
    //                 break;
    //             }
    //         } 

    //         // 逆序遍历 t 字符串
    //         while (t_idx >= 0) {
    //             if (t[t_idx] == '#') {
    //                 ++t_bs_cnt;
    //                 --t_idx;
    //             }
    //             else if (t_bs_cnt > 0) {
    //                 --t_bs_cnt;
    //                 --t_idx;
    //             }
    //             else {
    //                 break;
    //             }
    //         } 

    //         // 比较 s, t
    //         if (s_idx >=0 && t_idx >= 0){
    //             if (s[s_idx] != t[t_idx]) {
    //                 return false;
    //             }
    //         }
    //         else if (s_idx >=0 || t_idx >= 0) {
    //             // s[0] = '#' 时, s_idx = -1
    //             // ✅ s_idx = -1 && t_idx == -1; s[0] == '#', t[0] == '#'
    //             // ❎ s_idx = -1 && t_idx == 0
    //             // ❎ s_idx = 0 && t_idx == -1
    //             return false;
    //         }
    //         --s_idx;
    //         --t_idx;
    //     }
    //     return true;
    // }

    // 双指针, 快慢指针先对字符串进行提取, 空间复杂度上升
    bool backspaceCompare(string s, string t) {
        int slowIndex = 0;
        int fastIndex = 0;

        for (fastIndex = 0; fastIndex < s.length(); ++fastIndex) {
            if (s[fastIndex] == '#') {
                if (slowIndex > 0) {
                    --slowIndex;
                }
            }
            else {
                s[slowIndex] = s[fastIndex];
                ++slowIndex;
            }  
        }
        int sEffectIdx = slowIndex;

        slowIndex = 0;
        fastIndex = 0;
        for (fastIndex = 0; fastIndex < t.length(); ++fastIndex) {
            if (t[fastIndex] == '#') {
                if (slowIndex > 0) {
                    --slowIndex;
                }
            }
            else {
                t[slowIndex] = t[fastIndex];
                ++slowIndex;
            }
        }
        int tEffectIdx = slowIndex;

        if (sEffectIdx == 0 && tEffectIdx == 0) {
            return true;
        }
        else if (sEffectIdx == 0 || tEffectIdx == 0) {
            return false;
        }
        else {
            return s.substr(0, sEffectIdx) == t.substr(0, tEffectIdx);
        }

    }

    // 栈
    // bool backspaceCompare(string S, string T) {
    //     return build(S) == build(T);
    // }

    // string build(string str) {
    //     string ret;
    //     for (char ch : str) {
    //         if (ch != '#') {
    //             ret.push_back(ch);
    //         } else if (!ret.empty()) {
    //             ret.pop_back();
    //         }
    //     }
    //     return ret;
    // }

};
// @lc code=end

TEST(backspaceCompare, backspaceCompare_1)
{
    Solution solotion;

    // # 表示退格字符
    // 输入
    string s = "ab#c";
    string t = "ad#c";


    // 期望输出
    bool ans = true;

    // 实际输出
    bool res = solotion.backspaceCompare(s, t);

    // 比较
    EXPECT_TRUE(res);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}