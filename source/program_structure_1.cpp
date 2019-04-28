#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 10;
    while (n > 0)
    {
        cout << n << ", ";
        --n;
    }

    //while loop
    string str;
    do
    {
        cout << "Enter text: ";
        getline(cin, str);
        cout << "You entered: " << str << '\n';
    } while (str != "goodBye");

    //for loop
    for (int n = 10; n > 0; n--)
    {
        cout << n << ", ";
    }
    cout << "liftoff!\n";

    //ranges for loop
    string str2{"Hello!"};
    for (char a : str2)
    {
        cout << "[" << a << "]";
    }
    cout << '\n';

    //goto loop
    int n = 10;
mylabel:
    cout << n << ", ";
    n--;
    if (n > 0)
        goto mylabel;
    cout << "liftoff!\n";
    return 0;
}
