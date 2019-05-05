#include <iostream>

using namespace std;

template <class T>
T sum(T a, T b)
{
    T result;
    result = a + b;
    return result;
}

template <class T, class U>
bool are_equal(T a, U b)
{
    return a==b;
}

template <class T, int N>
T fixed_multiply(T val)
{
    return val*N;
}

int main(int argc, char const *argv[])
{
    int i =5, j= 6, k;
    double f=2.0, g = 0.5, h;
    k = sum(i, j);
    h = sum(f, g);
    cout << k << '\n';
    cout << h << '\n';

    if(are_equal(10, 10.0)){
        cout << "x and y are equal\n";
    }else{
        cout << "x and y are not euqal\n";
    }

    cout << fixed_multiply<int, 2>(10) << '\n';
    return 0;
}


