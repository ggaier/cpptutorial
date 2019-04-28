#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //cpp标准库中定义了一些方便使用的stream object.
    // cout, cin, cerr, clog.
    //在标准的 io 中, << 是插入符号. 而且插入符号可以串联起来

    cout << "This "
         << " is a "
         << "single C++ statement";

    //标准的 io 中, 除了可以使用 \n 来表示新行外, 还可以是用 endl
    //操作符表示.
    //但是 endl 和 \n 的区别在于, endl 会 flush stream buffer.

    //cin 是默认的输入设备流.
    int i ;
    cout << "Please enter an integer: ";
    cin >> i;
    cout << " and its double value is " << i*2 << ".\n";
    return 0;
}
