/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */


#include <stdio.h>

// @lc code=start

int removeElement(int* nums, int numsSize, int val) {
    int *p = nums;
    int *q = nums + numsSize - 1;

    while (p <= q) {

        // q 找不等于 val 的元素
        if (*q == val) {
            q--;
            continue;
        }
        if (*p == val) {
            *p = *q;
            q--;
        }
        p++;
    }
    return p - nums;
}

// @lc code=end

int main() {

    int nums[8] = {0, 1, 2, 2, 3, 0, 4, 2};  // 定义数组
    int numsSize = 8;                        // 数组尺寸
    int val = 2;                             // 待删除元素值
    int i = 0;

    int len = removeElement(nums, numsSize, val);
    printf("%d\n", len);
    for (i = 0; i < len; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

