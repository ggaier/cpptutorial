#include <iostream>

using namespace std;

class Rectangle
{
    int width, height;

public:
    // void set_values(int, int);
    Rectangle();
    Rectangle(int, int);
    int area()
    {
        return width * height;
    };
};

/*
:: scope 操作符, 用来在一个类的外部定义一个类的 member.
同时, 这个方法是 public 的.
*/
// void Rectangle::set_values(int x, int y){
// width = x;
// height = y;
// }

Rectangle::Rectangle(int x, int y)
{
    width = x;
    height = y;
}

Rectangle::Rectangle()
{
    width = 5;
    height = 5;
}

class Circle
{
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() { return radius * radius * 3.1415926; }
};

class Cylinder
{
    Circle base;
    double height;

public:
    Cylinder(double r, double h) : base(r), height(h){};
    double volume() { return base.area() * height; }
};

int main(int argc, char const *argv[])
{
    //class 是 data structure 的拓展, 也就是说, 除了
    //可以包含任意类型 的data member 之外, 还可以包含
    // 方法, 也作为 member.

    //一个对象, 就是一个类的实例化.
    //类的定义可以使用class 或者是 struct 关键字.

    //类除了比 data structure 多了方法之外, 还多了访问修饰符
    //access specifier: private, public, protected.
    //默认的修饰符就是 private.

    // Rectangle rect;
    // rect.set_values(3, 4);
    // cout << "area:" << rect.area();

    //构造器. constructors.
    Rectangle rect(3, 4);
    Rectangle rectb(5, 6);
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;

    Rectangle rectd(3, 4);
    Rectangle rectc;
    cout << "rectd area: " << rectd.area() << endl;
    cout << "rectc area: " << rectc.area() << endl;

    //uniform initialization.
    Rectangle recte{7, 8};
    Rectangle rectf = {9, 10};

    cout << recte.area() << ", " << rectf.area() << endl;

    Circle * ca = new Circle(15);

    return 0;
}
