#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    //Strings 和 字符序列有所区别.
    //前者是 c++库中的字符串, 后者是 c 中的字符串.

    //这个是c 中的字符序列.
    char question[] = "What is your name? ";
    //这个是c++标准库的string
    string quesiton2 = "Where do you live? ";
    char answer1 [80];
    string answer2;
    cout << question;
    cin >> answer1;
    cout << quesiton2;
    cin >> answer2;
    cout << "Hello, " << answer1;
    cout << "from " << answer2 << "\n";

    return 0;
}
