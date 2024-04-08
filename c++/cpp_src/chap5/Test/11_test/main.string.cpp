#include <iostream>
#include <string>
using namespace std;

class Book{
    string title;
    string author;   //저자
    int price;
    int pages;

public:
//    Book(const char* title, int price);
    Book(const string title, const string author, int price, int pages);
    Book(const Book& c);
    ~Book();
    void set(const string title, const string author, int price, int pages);
    void show () {
        cout << title << ' ' << price << "원" << endl;
        cout << author <<' ' << pages << "페이지" << endl;
    }
};

// Book::Book(const char* title, int price){
//     this->price = price;
//     int len = strlen(title);

//     this->title = new char [len+1];
//     strcpy(this->title,title);
// }

Book::Book(const string title, const string author, int price, int pages){
    this->price = price;
    this->pages = pages;

    this->title = title;
    this->author = author;
}

Book::Book(const Book& c){
    this->title = c.title;  
    this->price = c.price;
    this->author = c.author;
    this->pages = c.pages;
}

Book::~Book(){  // 소멸
}

void Book::set(const string title, const string author, int price, int pages){
   this->title = title;
   this->author = author;
   this-> price = price;
   this-> pages = pages;
}


int main() {
    Book cpp("명품C++", "황기태", 10000, 696);
    Book java = cpp;
    
    java.set("명품자바", "홍솔아", 12000, 800);
    cpp.show();
    java.show();
}