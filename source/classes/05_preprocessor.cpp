#include <iostream>

//宏定义, #define identifier replacement,
// 当 preprocessor遇到 define 命令的时候,
//会在所有代码中把 identifier 替换为 replacement.
#define TABLESIZE 100
/*还可以定义方法宏*/
#define getmax(a, b) (a > b ? a : b)

/*宏的生命周期是当有#undef 出现的时候
例如: #undef TABLESIZE.
*/

/*
方法宏中, 有两个操作符 #, 和 ## . 操作符要有空格.
前者#, 表示把一个变量加双引号
后者## 表示把前后两个变量无空格连接在一起.
*/
#define str(r) # r

#define glue(a, b) a ## b

using namespace std;

int main(int argc, char const *argv[])
{
    //preprocessor 指的是前缀# 符号的语句, 这些语句
    //不是编程语句, 不以;结尾, 通常只能占一行.

    //宏定义
    int table1[TABLESIZE];
    int table2[TABLESIZE];

    int x = 5, y;
    y = getmax(x, 2);
    cout << y << endl;
    cout << getmax(7, x) << endl;

    //#, 和##
    cout << str(test) << endl;
    glue(c, out) << "test" << endl;

    return 0;
}
