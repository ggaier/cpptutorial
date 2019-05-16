#include <iostream>

using namespace std;

class MyClass
{
private:
    /* data */
public:
    MyClass(/* args */);
    /*析构函数*/
    ~MyClass(){
    };
};

MyClass::MyClass(/* args */)
{
}

int main(int argc, char const *argv[])
{
    //spicial member 指的是在某些情况下定义的 member.

    //destructor 析构函数, 当对象的生命周期结束的时候, 
    //负责必要的清理的函数. 
    //析构函数的语法是: ~ClassName(){}

    //copy constructor, 当调用构造器的时候, 传入一个自身的类型的时候, 
    //会自动调用 copy constructor.
    return 0;
}
