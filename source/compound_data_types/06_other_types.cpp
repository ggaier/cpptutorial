#include <iostream>

int main(int argc, char const *argv[])
{
    //type alias: typedef, 和 using. 两种方法.

    //union 和 structure 类似, 但是区别在于
    //前者中所有的 member 都是存储在同一个内存地址, 
    //所占用的内存大小是最大的 member 的大小.
    //anonymous
    union {
        float dolloars;
        int yen;
    } price;

    //枚举类型 enumerated type. 

    //这种类型的枚举, 可以和 int 互相转化, 其本身就是 int 类型.
    enum colors_t{
        black, 
        blue, green, cyan, red, purple, yellow, white
    };

    //enum class, 其本身则就是 enum 类型.
    enum class Colors{
        black, blue, green, cyan, purple, yellow, white
    };

    return 0;
}
