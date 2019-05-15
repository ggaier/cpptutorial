#include <iostream>

using namespace std;

class CVector{
    public:
        int x, y;
        CVector(){};
        CVector(int a, int b): x(a), y(b){}
        CVector operator + (const CVector& param);
        CVector operator + (const CVector * param);
};

CVector CVector::operator+(const CVector& param){
    CVector temp;
    temp.x = x +  param.x;
    temp.y = y + param.y;
    return temp;
}

class Dummy
{
private:
    /* data */
public:
    static int n;
    Dummy(){n++;};
    bool isitme(Dummy& param);
};

bool Dummy::isitme(Dummy& param)
{   //this 指的是指向该对象的指针.
    if(&param == this ) return true;
    else return false;
}

int Dummy::n = 0;

class MyClass
{
    int x;
public:
    MyClass(int val): x(val){};
    const int& get() const {return x;};
    int& get() {return x;};
};


int main(int argc, char const *argv[])
{
    //operators overload: 使用 operate方法, 后缀操作符.
    //语法如下: type operator sign (parameters) {}
    CVector foo {3, 1};
    CVector bar {1, 2};
    CVector result;
    result = foo + bar;
    cout << result.x << ", " << result.y << endl;

    //this 关键字, 指的是指向包含那个方法的对象的指针.
    Dummy a;
    Dummy* b = &a;
    if(b->isitme(a))
        cout << "yes, &a is b\n";

    //静态成员, 指的是 class 变量, 对于同一个类来说, 
    //同一个类变量只能有一个.
    Dummy c;
    Dummy d[5];
    cout <<"dummy count: " << a.n << '\n';
    Dummy * f = new Dummy;
    cout << Dummy::n << '\n';
    delete f;

    //const objects 只能访问 const 的成员方法.
    //成员方法可以使用 const 重载. 
    //const 修饰的类对象, 不能被修改, 是只读的.
    MyClass foo1 {10};
    const MyClass bar1 (20);
    foo1.get() = 15;
    cout << foo1.get() << '\n';
    cout << bar1.get() << '\n';
    return 0;
}
