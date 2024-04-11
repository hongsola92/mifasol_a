#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    int price, pages;
public:
    Book(string title="", int price=0, int pages=0);
    void show();
    string getTitle();
    friend Book& operator+=(Book& book, int op);    // friend로 참조 사용하여
    friend Book& operator-=(Book& book, int op);
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

// Book Book::operator+=(int op)
// {
//     this->price = this->price + op;     //this->kick += op2.kick;
//     return *this;       // 포인터 안에 값을 넘겨주는것.
// }

// Book Book::operator-=(int op)
// {
//     this->price = this->price - op;     //this->kick += op2.kick;
//     return *this;       // 포인터 안에 값을 넘겨주는것.
// }

Book& operator+=(Book& book, int op) {
    book.price += op;
    return book;
}

Book& operator-=(Book& book, int op) {
    book.price -= op;
    return book;
}

int main(void)
{
    Book a("청춘", 20000, 300), b("미래", 30000, 500);
    a += 500;
    b -= 500;
    a.show();
    b.show();

    return 0;
}
