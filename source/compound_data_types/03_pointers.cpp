#include <iostream>
using namespace std;

void increment_all(int* start, int* stop)
{
    int * current  = start;
    while(current!=stop){
        ++(*current);
        ++current;
    }
}

void print_all(const int* start, const int* stop)
{
    const int* current = start;
    while(current!=stop){
        cout << *current << '\n';
        ++current;
    }
}

int main(int argc, char const *argv[])
{
    //C++ 中的取地址预算符 &.
    auto myvar = 25;
    auto foo = &myvar;
    auto bar = myvar;

    //有了取地址运算符之后, 要能够访问地址所指向的变量.
    //这就需要用到解运算符. 具体的用法就是 *variable 

    auto baz = foo;
    auto baz2 = *foo;

    //指针类型和解参考运算子写法类似.
    int firstvalue, secondvalue;
    //这个 * 号只是用来表示表示 mypointer 是个指针类型.
    //所有的指针类型都占用固定的内存空间, 但是指向不同的数据类型.
    int * mypointer;
    mypointer = &firstvalue;
    // 解参考运算符. 这里的意思是修改 firstvalue 的值.
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    cout << "first value is " << firstvalue << '\n';
    cout << "second value is " << secondvalue << '\n';

    //指针和数组, 数组和指针是类似的.
    int numbers[5];
    int *p;
    p = numbers;
    *p = 10;
    p++;
    *p = 20;
    p = &numbers[2];
    *p = 30;
    p = numbers + 3;
    *p = 40;
    p = numbers;
    *(p + 4) = 50;
    for (int n = 0; n < 5; n++)
        cout << numbers[n] << ", ";
    cout << '\n';
    //指针的算数运算.只允许加法和减法.
    //它通常指的是移动到下一个或者上一个内存 cell
    int numbers2[] {10, 20, 30};
    increment_all(numbers2, numbers2+3);
    print_all(numbers2, numbers2+3);

    //void pointers, 类似 java 中的对象类型. 可以代表
    //任何类, 但在使用的时候, 要转成具体的类型的指针.

    //方法指针, 和方法的声明一样, int (*functionname)(parmas, params)
    return 0;
}
