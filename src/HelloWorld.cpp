/*
Alt+Shift+F  格式化代码
Ctrl+Shift+B 单纯编译
F5           为编译加调试

home、end         行头、行尾
fn + ←/→          行头、行尾
fn + shift + ←/→  选取整行
delete            删除右边
ctrl + delete     删除右边一个单词
ctrl + backspace  删除左边一个单词
ctrl + ←/→        跳一个单词

*/

/*
code style:
    + if 后面加空格
    + { 前面要有空格
    + 所有括号、关键字前后得有空格
*/

// 编译 g++ -o ./src/bin/HelloWorld ./src/HelloWorld.cpp 
// 运行 ./src/bin/HelloWorld
#include <iostream>
using std::cout;
using std::endl;

int main() {

    cout << "Hello World!" << endl;

    // system("pause");  // windows 下加上该句
    return 0;
}
