#include <iostream>

using namespace std;

//constant expression
const double pi = 3.1415926;
const char tab = '\t';

#define PI 3.1415926
#define NEWLINE '\n'

int main(int argc, char const *argv[])
{
    // literals: express particular values within the source code
    string a = "this forms a"
               " single "
               "string "
               "of characters";
    cout << a << endl;
    auto x = "string expression "
             "in two lines";
    cout << x << endl;

    auto c = 'a';
    cout << c << endl;

    auto raw_string = R"(string with \backslash)";
    auto raw_string2 = R"abc(string with \$%#backslash)abc";
    cout << raw_string << endl;
    cout << raw_string2 << endl;
    int *ptr = nullptr;

    // 单引号表示一个单一字符.
    char ab = 'a';
    cout << ab << endl;
    const char tab = '\t';

    double r = 5.0;
    double circle = r * PI * 2;
    cout << "circle is: " << circle << endl;

    // preprocessor 的定义: #define identifier replacement
    // 可以把一个字面量定义一个别名, 使用 identifier 来代替 replacement.
    //由于预处理发生在编译之前, 所以 replacement 不会有类型和语法检查. 同时不需要
    // ';'在指令的结尾.
    return 0;
}
