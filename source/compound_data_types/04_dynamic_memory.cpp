#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //由于某些情况下在运行时才能确定内存的大小, 这就需要
    //动态的申请内存. 也就是 new delete 操作符.
    int i, n;
    int *p;
    cout << "How many numbers would you like to type? ";
    cin >> i;
    p = new (nothrow) int[i];
    if (p == nullptr)
        cout << "Error: memory could not be allocated";
    else
    {
        for (n = 0; n < i; n++)
        {
            cout << "Enter number: ";
            cin >> p[n];
        }
        cout << "You have entered: ";
        for (n = 0; n < i; n++)
            cout << p[n] << ", ";
        delete[] p;
    }

    return 0;
}
