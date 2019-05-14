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


int main(int argc, char const *argv[])
{
    //operators overload: 使用 operate方法, 后缀操作符.
    //语法如下: type operator sign (parameters) {}
    CVector foo {3, 1};
    CVector bar {1, 2};
    CVector result;
    result = foo + bar;
    cout << result.x << ", " << result.y << endl;

    return 0;
}
