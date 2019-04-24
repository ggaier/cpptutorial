#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    //declaring variables
    int a, b;
    int result;

    //process
    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;

    //print result
    cout << result;

    //ways initialize variables
    int c = 5;
    int d(3);
    // int e{2}; //c++ 11
    int e(2);
    int result2;//initial value undifined.

    c = c+d;
    result2 = c-e;
    cout << "\n";
    cout << result2;

    //auto and decltype(): short for declare type
    int foo = 0;
    decltype(foo) bar;

    int foo1 = 0;
    auto bar1 = foo1;
    auto bar2(foo1);

    //strings
    string mystring;
    mystring = "This is the initial string content";

    cout << mystring << endl;
    mystring = "This is a different string content";
    cout << mystring << endl;

    return 0;
}
