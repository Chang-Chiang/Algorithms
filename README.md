# Algorithms
算法与数据结构刷题记录

## 环境准备

### 编译运行环境

+ linux, wsl2 Ubuntu 22.04 LTS

  ```bash
  $ lsb_release -a
  No LSB modules are available.
  Distributor ID: Ubuntu
  Description:    Ubuntu 22.04 LTS
  Release:        22.04
  Codename:       jammy
  ```

+ gcc

  ```bash
  $ gcc -v
  ···
  Thread model: posix
  Supported LTO compression algorithms: zlib zstd
  gcc version 11.2.0 (Ubuntu 11.2.0-19ubuntu1) 
  ```


### 本地编译运行参考

> + [GitHub - Pokerpoke/LeetCode: Debug LeetCode C/C++ problems locally.](https://github.com/Pokerpoke/LeetCode)
> + [使用VSCode进行LeetCode C++本地调试 - 知乎 (zhihu.com)](https://zhuanlan.zhihu.com/p/80062085)

#### 1. 安装 cmake

> + [ubuntu安装cmake的三种方法](https://blog.csdn.net/Man_1man/article/details/126467371)
>
> + [ubuntu18升级/安装cmake 超详细](https://blog.csdn.net/weixin_42035347/article/details/125763949)

+ 安装 openssl

  ```bash
  $ sudo apt install openssl
  $ sudo apt install libssl-dev
  ```

+ 安装 cmake

  ```bash
  $ wget https://cmake.org/files/v3.25/cmake-3.25.2.tar.gz  # 下载源文件
  $ tar -xvzf cmake-3.25.2.tar.gz  # 解压
  #【移动文件夹、重命名】
  $ mv cmake-3.25.2/ /usr/local/bin/  # 移动文件夹 
  $ cd /usr/local/bin/
  $ mv cmake-3.25.2/ cmake/  # 重命名
  $ cd /usr/local/bin/cmake/  # 切换路径
  $ ./bootstrap
  $ make  # 编译
  $ sudo make install  # 安装
  $ sudo ln -sf /usr/local/bin/cmake/bin/* /usr/bin/  # 建立软链接
  $ hash -r
  $ cmake --version  # 检查是否安装成功
  ```

#### 2. 安装 googletest

```bash
$ git clone https://github.com/google/googletest.git
$ cd googletest
$ cmake .  # 预编译
$ sudo make  # 编译
$ sudo make install  # 安装
```

#### 3. 生成模板

```bash
$ ./generate_template 2.addTwoNUmbers
```

#### 4. 运行

```bash
$ ./leetcode 2.addTwoNumbers
```

### 参考书籍、视频

| 参考                                                         | 进度 |
| ------------------------------------------------------------ | ---- |
| :book:[《代码随想录：跟着 Carl 学算法》](https://programmercarl.com/) |      |
| :book:《labuladong的算法小抄》                               |      |
| :cinema:《极客时间：算法训练营》                             |      |
| :cinema:《极客时间：数据结构与算法之美》                     |      |
| :cinema:《施磊：数据结构与算法之美》                         |      |
| :cinema:《imooc：》                                          |      |

## 数组

![数组总结](assets/数组总结.png)

|                         Description                          |              Tag:smile::neutral_face::disappointed:              |        Solution |
| :----------------------------------------------------------- | :------------------- | :------------------- |
| [704. 二分查找 - 力扣（Leetcode）](https://leetcode.cn/problems/binary-search/) | `binary-search` |  [704.search.cc](./src/704.search.cc)  |
| [35. 搜索插入位置 - 力扣（Leetcode）](https://leetcode.cn/problems/search-insert-position/) | `binary-search` | [35.searchInsert.cc](./src/35.searchInsert.cc) |
| [34. 在排序数组中查找元素的第一个和最后一个位置 - 力扣（Leetcode）](https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/) | `binary-search` | [34.searchRange.cc](./src/34.searchRange.cc) |
| [69. x 的平方根 - 力扣（Leetcode）](https://leetcode.cn/problems/sqrtx/) | `binary-search` | [69.mySqrt.cc](./src/69.mySqrt.cc) |
| [367. 有效的完全平方数 - 力扣（Leetcode）](https://leetcode.cn/problems/valid-perfect-square/) | `binary-search` | [367.isPerfectSquare.cc](./src/367.isPerfectSquare.cc) |
|  [27. 移除元素 - 力扣（Leetcode）](https://leetcode.cn/problems/remove-element/)                                                            | `two-pointers` | [27.removeElement.cc](./src/27.removeElement.cc) |
| [26. 删除有序数组中的重复项 - 力扣（Leetcode）](https://leetcode.cn/problems/remove-duplicates-from-sorted-array/) | `two-pointers` | [26.removeDuplicates.cc](./src/26.removeDuplicates.cc) |
| [283. 移动零 - 力扣（Leetcode）](https://leetcode.cn/problems/move-zeroes/) | `two-pointers` | [283.moveZeroes.cc](./src/283.moveZeroes.cc) |
| [844. 比较含退格的字符串 - 力扣（Leetcode）](https://leetcode.cn/problems/backspace-string-compare/) | `two-pointers` | [844.backspaceCompare.cc](./src/844.backspaceCompare.cc) |
| [977. 有序数组的平方 - 力扣（Leetcode）](https://leetcode.cn/problems/squares-of-a-sorted-array/) | `two-pointers` | [977.sortedSquares.cc](./src/977.sortedSquares.cc) |
| [209. 长度最小的子数组 - 力扣（Leetcode）](https://leetcode.cn/problems/minimum-size-subarray-sum/) | `sliding-window`:neutral_face: | [209.minSubArrayLen.cc](./src/209.minSubArrayLen.cc) |
| [904. 水果成篮 - 力扣（Leetcode）](https://leetcode.cn/problems/fruit-into-baskets/) | `sliding-window`:neutral_face: | [904.totalFruit.cc](./src/904.totalFruit.cc) |
| [76. 最小覆盖子串 - 力扣（Leetcode）](https://leetcode.cn/problems/minimum-window-substring/) | `sliding-window` | [76.minWindow.cc](./src/76.minWindow.cc) |
| [59. 螺旋矩阵 II - 力扣（Leetcode）](https://leetcode.cn/problems/spiral-matrix-ii/) | `matrix` |                      |
| [54. 螺旋矩阵 - 力扣（Leetcode）](https://leetcode.cn/problems/spiral-matrix/) | `matrix` |                      |
| [剑指 Offer 29. 顺时针打印矩阵 - 力扣（Leetcode）](https://leetcode.cn/problems/shun-shi-zhen-da-yin-ju-zhen-lcof/) | `matrix` | |

## 链表

| Description                                                  | Tag:smile::neutral_face::disappointed: | Solution |
| :----------------------------------------------------------- | -------------------------------------- | :------: |
| [203. 移除链表元素 - 力扣（Leetcode）](https://leetcode.cn/problems/remove-linked-list-elements/) | `recursion`                            |          |
| [707. 设计链表 - 力扣（Leetcode）](https://leetcode.cn/problems/design-linked-list/) |                                        |          |
| [206. 反转链表 - 力扣（Leetcode）](https://leetcode.cn/problems/reverse-linked-list/) |                                        |          |
| [24. 两两交换链表中的节点 - 力扣（Leetcode）](https://leetcode.cn/problems/swap-nodes-in-pairs/) |                                        |          |
| [19. 删除链表的倒数第 N 个结点 - 力扣（Leetcode）](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/) |                                        |          |
| [160. 相交链表 - 力扣（Leetcode）](https://leetcode.cn/problems/intersection-of-two-linked-lists/) |                                        |          |
| [142. 环形链表 II - 力扣（Leetcode）](https://leetcode.cn/problems/linked-list-cycle-ii/) |                                        |          |

## 哈希表

| Description                                                  | Tag:smile::neutral_face::disappointed: | Solution |
| :----------------------------------------------------------- | -------------------------------------- | -------- |
| [242. 有效的字母异位词 - 力扣（Leetcode）](https://leetcode.cn/problems/valid-anagram/) |                                        |          |
| [349. 两个数组的交集 - 力扣（Leetcode）](https://leetcode.cn/problems/intersection-of-two-arrays/) |                                        |          |
| [202. 快乐数 - 力扣（Leetcode）](https://leetcode.cn/problems/happy-number/) |                                        |          |
| [1. 两数之和 - 力扣（Leetcode）](https://leetcode.cn/problems/two-sum/) |                                        |          |
| [454. 四数相加 II - 力扣（Leetcode）](https://leetcode.cn/problems/4sum-ii/) |                                        |          |
| [383. 赎金信 - 力扣（Leetcode）](https://leetcode.cn/problems/ransom-note/) |                                        |          |
| [15. 三数之和 - 力扣（Leetcode）](https://leetcode.cn/problems/3sum/) |                                        |          |
| [18. 四数之和 - 力扣（Leetcode）](https://leetcode.cn/problems/4sum/) |                                        |          |

## 字符串

|      No      | Description  | Tag:smile::neutral_face::disappointed: | Solution |
| :----------: | :----------: | -------------------------------------- | -------- |
|     344      |              |                                        |          |
|     541      |              |                                        |          |
| 剑指Offer 05 |   替换空格   |                                        |          |
|     151      |              |                                        |          |
| 剑指Offer58  | 左旋转字符串 |                                        |          |
|      28      |              |                                        |          |
|     459      |              |                                        |          |

## 双指针法

|  No  | Description | Tag:smile::neutral_face::disappointed: | Solution |
| :--: | :---------: | -------------------------------------- | -------- |
|  27  |             |                                        |          |
|  26  |             |                                        |          |
| 283  |             |                                        |          |
| 844  |             |                                        |          |
| 977  |             |                                        |          |
| 344  |             |                                        |          |
| 151  |             |                                        |          |
| 206  |             |                                        |          |
|  19  |             |                                        |          |
| 160  |             |                                        |          |
| 142  |             |                                        |          |
|  15  |             |                                        |          |
|  18  |             |                                        |          |

## 栈与队列

|  No  | Description | Tag:smile::neutral_face::disappointed: | Solution |
| :--: | :---------: | -------------------------------------- | -------- |
| 232  |             |                                        |          |
| 225  |             |                                        |          |
|  20  |             |                                        |          |
| 1047 |             |                                        |          |
| 150  |             |                                        |          |
| 239  |             |                                        |          |
| 347  |             |                                        |          |

## 二叉树

|  No  | Description | Tag:smile::neutral_face::disappointed: | Solution |
| :--: | :---------: | -------------------------------------- | -------- |
| 144  |             |                                        |          |
| 145  |             |                                        |          |
|  94  |             |                                        |          |
| 102  |             |                                        |          |
| 107  |             |                                        |          |
| 199  |             |                                        |          |
| 637  |             |                                        |          |
| 429  |             |                                        |          |
| 515  |             |                                        |          |
| 116  |             |                                        |          |
| 117  |             |                                        |          |
| 104  |             |                                        |          |
| 111  |             |                                        |          |
| 226  |             |                                        |          |
| 589  |             |                                        |          |
| 590  |             |                                        |          |
| 101  |             |                                        |          |
| 100  |             |                                        |          |
| 572  |             |                                        |          |
| 104  |             |                                        |          |
| 111  |             |                                        |          |
| 222  |             |                                        |          |
| 110  |             |                                        |          |
| 257  |             |                                        |          |
| 404  |             |                                        |          |
| 513  |             |                                        |          |
| 112  |             |                                        |          |
| 106  |             |                                        |          |
| 105  |             |                                        |          |
| 654  |             |                                        |          |
| 617  |             |                                        |          |
| 700  |             |                                        |          |
|  98  |             |                                        |          |
| 530  |             |                                        |          |
| 501  |             |                                        |          |
| 236  |             |                                        |          |
| 235  |             |                                        |          |
| 701  |             |                                        |          |
| 450  |             |                                        |          |
| 669  |             |                                        |          |
| 108  |             |                                        |          |
| 538  |             |                                        |          |

## 回溯算法

|  No  | Description | Tag:smile::neutral_face::disappointed: | Solution |
| :--: | :---------: | -------------------------------------- | -------- |
|  77  |             |                                        |          |
|  17  |             |                                        |          |
|  39  |             |                                        |          |
|  40  |             |                                        |          |
| 216  |             |                                        |          |
| 131  |             |                                        |          |
|  93  |             |                                        |          |
|  78  |             |                                        |          |
|  90  |             |                                        |          |
|  46  |             |                                        |          |
|  47  |             |                                        |          |
|  51  |             |                                        |          |
|  37  |             |                                        |          |
| 491  |             |                                        |          |
| 332  |             |                                        |          |

## 贪心算法

|  No  | Description | Tag:smile::neutral_face::disappointed: | Solution |
| :--: | :---------: | -------------------------------------- | -------- |
| 455  |             |                                        |          |
| 1005 |             |                                        |          |
| 860  |             |                                        |          |
| 376  |             |                                        |          |
| 738  |             |                                        |          |
| 122  |             |                                        |          |
| 714  |             |                                        |          |
| 135  |             |                                        |          |
| 406  |             |                                        |          |
|  55  |             |                                        |          |
|  45  |             |                                        |          |
| 452  |             |                                        |          |
| 435  |             |                                        |          |
| 763  |             |                                        |          |
|  56  |             |                                        |          |
|  53  |             |                                        |          |
| 134  |             |                                        |          |
| 968  |             |                                        |          |

## 动态规划

|  No  | Description | Tag:smile::neutral_face::disappointed: | Solution |
| :--: | :---------: | -------------------------------------- | -------- |
| 509  |             |                                        |          |
|  70  |             |                                        |          |
| 746  |             |                                        |          |
|  62  |             |                                        |          |
|  63  |             |                                        |          |
| 343  |             |                                        |          |
|  96  |             |                                        |          |
| 416  |             |                                        |          |
| 1049 |             |                                        |          |
| 494  |             |                                        |          |
| 474  |             |                                        |          |
| 518  |             |                                        |          |
| 377  |             |                                        |          |
|  70  |             |                                        |          |
| 322  |             |                                        |          |
| 279  |             |                                        |          |
| 139  |             |                                        |          |
| 198  |             |                                        |          |
| 213  |             |                                        |          |
| 337  |             |                                        |          |
| 121  |             |                                        |          |
| 122  |             |                                        |          |
| 123  |             |                                        |          |
| 188  |             |                                        |          |
| 309  |             |                                        |          |
| 714  |             |                                        |          |
| 300  |             |                                        |          |
| 1143 |             |                                        |          |
| 1035 |             |                                        |          |
| 674  |             |                                        |          |
| 718  |             |                                        |          |
|  53  |             |                                        |          |
| 392  |             |                                        |          |
| 115  |             |                                        |          |
| 583  |             |                                        |          |
|  72  |             |                                        |          |
| 647  |             |                                        |          |
| 516  |             |                                        |          |

## 单调栈

|  No  | Description | Tag:smile::neutral_face::disappointed: | Solution |
| :--: | :---------: | -------------------------------------- | -------- |
| 739  |             |                                        |          |
| 496  |             |                                        |          |
| 503  |             |                                        |          |
|  42  |             |                                        |          |
|  84  |             |                                        |          |

##  
