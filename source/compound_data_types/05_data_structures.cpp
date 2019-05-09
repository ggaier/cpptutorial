#include <iostream>
#include <string>
#include <sstream>

using namespace std;


struct product {
    int weight;
    double price;
};

product apple;
product banana, melon;

struct movies_t{
    string title;
    int year;
} mine, yours;

void printmovie(movies_t movie);


int main1(int argc, char const *argv[])
{
    string mystr;
    mine.title = "2001 A Space Odyssey";
    mine.year = 1968;

    cout << "Enter title: ";
    getline(cin, yours.title);
    cout << "Enter year: ";
    getline(cin, mystr);
    stringstream(mystr) >> yours.year;

    cout << "My favorite movie is : \n";
    printmovie(mine);

    cout << "And yours is: \n";

    printmovie(yours);

    return 0;
}


int main(int argc, char const *argv[])
{
    string mystr;
    movies_t amovie;
    movies_t * pmovie;
    pmovie = &amovie;

    cout << "Enter title: ";
    getline(cin, pmovie->title);
    cout << "Enter year: ";
    getline(cin, mystr);

    //arrow operator: 箭头操作符的作用, 带有 member 的指针类型专用,
    //目的是直接从指针所指向的对象地址中访问它的 member.

    //以下两个表达式是相同的.
    // (stringstream)mystr >> pmovie->year;
    (stringstream)mystr >> (*pmovie).year;

    
    cout << "\nYou have entered: \n ";
    cout << pmovie->title;

    cout << " (" << pmovie->year << ") \n";

    //另外结构体可以内嵌另外一个结构体.

    return 0;
}


void printmovie(movies_t movie)
{
    cout << movie.title;
    cout << "(" << movie.year << ")";
}