#include <iostream>
using namespace std;

namespace foo
{
int value() { return 5; }
} // namespace foo

namespace bar
{
const double pi = 3.1415926;
int value() { return 2 * pi; }
} // namespace bar


int main(int argc, char const *argv[])
{
    cout << foo::value() << '\n';
    cout << bar::value() << '\n';
    cout << bar::pi << '\n';
    return 0;
}
