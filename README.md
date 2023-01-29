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
  $ mv cmake-3.25.2/ cmake/  # 重命名
  $ cd /usr/local/bin/cmake/  # 切换路径
  $ ./bootstrap
  $ make  # 编译
  $ sudo make install  # 安装
  $ sudo ln -sf /usr/local/bin/cmake/bin/* /usr/bin/  # 建立软链接
  $ hash -r
  $ cmake --version  # 检查是否安装成功
  ```

#### 2. 安装 googleteset

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
$ ./leetcode 2.addTwoNUmbers
```

### 参考书籍、视频

| 参考                                     | 进度 |
| ---------------------------------------- | ---- |
| :book:《跟着 Carl 学算法》               |      |
| :book:《labuladong的算法小抄》           |      |
| :cinema:《极客时间：算法训练营》         |      |
| :cinema:《极客时间：数据结构与算法之美》 |      |
| :cinema:《施磊：数据结构与算法之美》     |      |

## 数组

|  No  |                         Description                          |          Tag           |              Solution              |        Check         |
| :--: | :----------------------------------------------------------: | :--------------------: | :--------------------------------: | :------------------: |
|  27  | [27. 移除元素 - 力扣（Leetcode）](https://leetcode.cn/problems/remove-element/description/) | `array`|`two-pointers` | [27.移除元素](./src/27.移除元素.c) |
| 704  | [704. 二分查找 - 力扣（LeetCode）](https://leetcode.cn/problems/binary-search/) | `array` | `binary-search` |  :white_check_mark:  |
|  35  |                                                              |                        |                                    | :white_large_square: |
|  34  |                                                              |                        |                                    |                      |
|  69  |                                                              |                        |                                    |                      |
| 367  |                                                              |                        |                                    |                      |
|  27  |                                                              |                        |                                    |                      |
|  26  |                                                              |                        |                                    |                      |
| 283  |                                                              |                        |                                    |                      |
| 844  |                                                              |                        |                                    |                      |
| 977  |                                                              |                        |                                    |                      |
| 209  |                                                              |                        |                                    |                      |
| 904  |                                                              |                        |                                    |                      |
|  76  |                                                              |                        |                                    |                      |
|  59  |                                                              |                        |                                    |                      |
|  54  |                                                              |                        |                                    |                      |

## 链表

|  No  | Description | Difficulty | Solution | Check |
| :--: | :---------: | :--------: | :------: | :---: |
| 203  |             |            |          |       |
| 707  |             |            |          |       |
| 206  |             |            |          |       |
|  24  |             |            |          |       |
|  19  |             |            |          |       |
| 160  |             |            |          |       |
| 142  |             |            |          |       |

## 哈希表

|  No  | Description | Difficulty | Solution | Check |
| :--: | :---------: | ---------- | -------- | ----- |
| 242  |             |            |          |       |
| 349  |             |            |          |       |
| 202  |             |            |          |       |
|  1   |             |            |          |       |
| 454  |             |            |          |       |
| 383  |             |            |          |       |
|  15  |             |            |          |       |
|  18  |             |            |          |       |

## 字符串

|      No      | Description  | Difficulty | Solution | Check |
| :----------: | :----------: | ---------- | -------- | ----- |
|     344      |              |            |          |       |
|     541      |              |            |          |       |
| 剑指Offer 05 |   替换空格   |            |          |       |
|     151      |              |            |          |       |
| 剑指Offer58  | 左旋转字符串 |            |          |       |
|      28      |              |            |          |       |
|     459      |              |            |          |       |

## 双指针法

|  No  | Description | Difficulty | Solution | Check |
| :--: | :---------: | ---------- | -------- | ----- |
|  27  |             |            |          |       |
|  26  |             |            |          |       |
| 283  |             |            |          |       |
| 844  |             |            |          |       |
| 977  |             |            |          |       |
| 344  |             |            |          |       |
| 151  |             |            |          |       |
| 206  |             |            |          |       |
|  19  |             |            |          |       |
| 160  |             |            |          |       |
| 142  |             |            |          |       |
|  15  |             |            |          |       |
|  18  |             |            |          |       |

## 栈与队列

|  No  | Description | Difficulty | Solution | Check |
| :--: | :---------: | ---------- | -------- | ----- |
| 232  |             |            |          |       |
| 225  |             |            |          |       |
|  20  |             |            |          |       |
| 1047 |             |            |          |       |
| 150  |             |            |          |       |
| 239  |             |            |          |       |
| 347  |             |            |          |       |

## 二叉树

|  No  | Description | Difficulty | Solution | Check |
| :--: | :---------: | ---------- | -------- | ----- |
| 144  |             |            |          |       |
| 145  |             |            |          |       |
|  94  |             |            |          |       |
| 102  |             |            |          |       |
| 107  |             |            |          |       |
| 199  |             |            |          |       |
| 637  |             |            |          |       |
| 429  |             |            |          |       |
| 515  |             |            |          |       |
| 116  |             |            |          |       |
| 117  |             |            |          |       |
| 104  |             |            |          |       |
| 111  |             |            |          |       |
| 226  |             |            |          |       |
| 589  |             |            |          |       |
| 590  |             |            |          |       |
| 101  |             |            |          |       |
| 100  |             |            |          |       |
| 572  |             |            |          |       |
| 104  |             |            |          |       |
| 111  |             |            |          |       |
| 222  |             |            |          |       |
| 110  |             |            |          |       |
| 257  |             |            |          |       |
| 404  |             |            |          |       |
| 513  |             |            |          |       |
| 112  |             |            |          |       |
| 106  |             |            |          |       |
| 105  |             |            |          |       |
| 654  |             |            |          |       |
| 617  |             |            |          |       |
| 700  |             |            |          |       |
|  98  |             |            |          |       |
| 530  |             |            |          |       |
| 501  |             |            |          |       |
| 236  |             |            |          |       |
| 235  |             |            |          |       |
| 701  |             |            |          |       |
| 450  |             |            |          |       |
| 669  |             |            |          |       |
| 108  |             |            |          |       |
| 538  |             |            |          |       |

## 回溯算法

|  No  | Description | Difficulty | Solution | Check |
| :--: | :---------: | ---------- | -------- | ----- |
|  77  |             |            |          |       |
|  17  |             |            |          |       |
|  39  |             |            |          |       |
|  40  |             |            |          |       |
| 216  |             |            |          |       |
| 131  |             |            |          |       |
|  93  |             |            |          |       |
|  78  |             |            |          |       |
|  90  |             |            |          |       |
|  46  |             |            |          |       |
|  47  |             |            |          |       |
|  51  |             |            |          |       |
|  37  |             |            |          |       |
| 491  |             |            |          |       |
| 332  |             |            |          |       |

## 贪心算法

|  No  | Description | Difficulty | Solution | Check |
| :--: | :---------: | ---------- | -------- | ----- |
| 455  |             |            |          |       |
| 1005 |             |            |          |       |
| 860  |             |            |          |       |
| 376  |             |            |          |       |
| 738  |             |            |          |       |
| 122  |             |            |          |       |
| 714  |             |            |          |       |
| 135  |             |            |          |       |
| 406  |             |            |          |       |
|  55  |             |            |          |       |
|  45  |             |            |          |       |
| 452  |             |            |          |       |
| 435  |             |            |          |       |
| 763  |             |            |          |       |
|  56  |             |            |          |       |
|  53  |             |            |          |       |
| 134  |             |            |          |       |
| 968  |             |            |          |       |

## 动态规划

|  No  | Description | Difficulty | Solution | Check |
| :--: | :---------: | ---------- | -------- | ----- |
| 509  |             |            |          |       |
|  70  |             |            |          |       |
| 746  |             |            |          |       |
|  62  |             |            |          |       |
|  63  |             |            |          |       |
| 343  |             |            |          |       |
|  96  |             |            |          |       |
| 416  |             |            |          |       |
| 1049 |             |            |          |       |
| 494  |             |            |          |       |
| 474  |             |            |          |       |
| 518  |             |            |          |       |
| 377  |             |            |          |       |
|  70  |             |            |          |       |
| 322  |             |            |          |       |
| 279  |             |            |          |       |
| 139  |             |            |          |       |
| 198  |             |            |          |       |
| 213  |             |            |          |       |
| 337  |             |            |          |       |
| 121  |             |            |          |       |
| 122  |             |            |          |       |
| 123  |             |            |          |       |
| 188  |             |            |          |       |
| 309  |             |            |          |       |
| 714  |             |            |          |       |
| 300  |             |            |          |       |
| 1143 |             |            |          |       |
| 1035 |             |            |          |       |
| 674  |             |            |          |       |
| 718  |             |            |          |       |
|  53  |             |            |          |       |
| 392  |             |            |          |       |
| 115  |             |            |          |       |
| 583  |             |            |          |       |
|  72  |             |            |          |       |
| 647  |             |            |          |       |
| 516  |             |            |          |       |

## 单调栈

|  No  | Description | Difficulty | Solution | Check |
| :--: | :---------: | ---------- | -------- | ----- |
| 739  |             |            |          |       |
| 496  |             |            |          |       |
| 503  |             |            |          |       |
|  42  |             |            |          |       |
|  84  |             |            |          |       |

##  
