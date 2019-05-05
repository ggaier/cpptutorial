#include <iostream>

using namespace std;

int addition(int a, int b);
int subtraction(int a, int b);

void duplicate(int& a, int& b, int& c)
{
    a*=2;
    b*=2;
    c*=2;
}

/*
inline 只是告诉编译器对齐方法是优先考虑的方案. 尽管编译器可能不会对齐.
*/
inline string concatenate(const string &a, const string &b)
{
    return a + b;
}

inline int divide(int a, int b =2){
    return a/b;
}

int main(int argc, char const *argv[])
{
    int z = addition(2, 3);
    cout << "The result is : "<< z;

    cout << "\nThe subtraction result: " << subtraction(12,5);

    //如果方法没有返回值的话, 使用 void.
    //main 方法中的返回值: 0, 表示成功.

    //方法中的传值和传引用. pass by value and by reference.
    //前面介绍的方法中传入的参数都是传值. 也就是说方法中对这种参数的修改
    //不会影响到传入的值.

    int x=2, y = 3, p = 4;

    duplicate(x, y, p);
    cout << "x = " << x << ", y = "<< y << ", p = "<<p;
    //从上边的例子中可以看出, cpp 中, 引用类型是具体类型后边跟一个 & 符号(ampersand).
    //但是传引用的方法有一个问题: 它是一个修改传入的参数的方法.
    //如果要强迫方法不能被方法修改, 可以使用 const reference. concatenate()方法.
    string j = "Jiang";
    string wb = "Wenbo";
    string jwb = concatenate(j, wb);
    cout << "concatenate result: " << jwb;

    cout << divide(12);
    return 0;
}

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}