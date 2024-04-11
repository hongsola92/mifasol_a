#include <iostream>
#include <string>
using namespace std;

class Book
{
    string title;
    int price, pages;
public:
    Book(string title="", int price=0, int pages=0);
    void show();
    string getTitle();
    bool operator==(Book op2);
    bool operator==(int price);
    bool operator==(string title);

};

Book::Book(string title, int price, int pages)
{
    this->title = title;
    this-> price = price;
    this->pages = pages;
}

void Book::show()
{
        cout <<title << ' ' << price << "원" << pages << "페이지" << endl;
}

string Book::getTitle()
{
    return title;
}
bool Book::operator==(Book op2)
{
    if(this->title == op2.title && this->price == op2.price && this->pages == op2.pages)
    return true;
    else return false;
}

bool Book::operator==(int price)
{
    return price == price;
}

bool Book::operator==(string title)
{
    return title == title;
}


int main(void)
{
    Book a("명품", 30000, 500), b("고품C++", 30000, 500);
    if(a == 30000) cout << "정가 30000원" << endl;  // price 비교
    if(a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
    if(a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두비교

    return 0;
}
