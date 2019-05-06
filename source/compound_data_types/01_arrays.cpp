#include <iostream>
#include <array>

using namespace std;

//数组是一个连续内存存储的, 同一类型的元素. 能够使用唯一的标志符附带 index 来访问
//其中的元素.

int foo [] {16, 2, 77, 40, 12071};
int n, result =0;

void printarray (int arg[], int length)
{
    for (int i = 0 ; i < length; i++)
    {
        cout << arg[i] << ' ';
    }
    cout << '\n';
}



int main(int argc, char const *argv[])
{
    for (n = 0; n <5; n++)
    {
        result += foo[n];
    }
     cout << result;
     int firstarray[] {5, 10, 15};
     int secondarray[] {2, 4, 6, 8, 10};
     printarray(firstarray, 3);
     printarray(secondarray, 5);

    int myarray[] {10, 20, 30};
    for (int i = 0; i <3 ; i++)
    {
        ++myarray[i];
    }
    for (int ele: myarray)
    {
        cout << ele << '\n';
    }

    array<int, 3> myarray2 {10, 20, 30};
    for (int i = 0; i<3; i++){
        ++myarray2[i];
    }
    for (int ele: myarray2){
        cout << ele << '\n';
    }
    return 0;
}
