//# 号是由 preprocessor 读取和解释的指令.
//它是特殊的指令, 在编译器编译程序之前就被解释.
// 下边的这条语句指的就是preprocessor 引入标准的 C++ iostream
//头文件, 来进行标准的输入输出操作.
#include <iostream>

//标准的 c++库都使用一个共同的 namespace: std. 这种情况下, 可以使用不带限定符的名字
using namespace std;

int main()
{
    /* std::cout 指的是 standard character output device
    << 是插入符号. 符号左边的插入到符号右边.
    */
    cout << "Hello, World: ";
    cout << "I'm a c++ program";
    return 0;
}