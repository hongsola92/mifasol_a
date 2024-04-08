#include <iostream>
#include <cstring>
using namespace std;

class Book{
    char *title;
    char *author;   //저자
    int price;
    int pages;

public:
//    Book(const char* title, int price);
    Book(const char* title, const char* author, int price, int pages);
    Book(const Book& c);
    ~Book();
    void set(const char* title, const char* author, int price, int pages);
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

Book::Book(const char* title, const char* author, int price, int pages){
    this->price = price;
    int len = strlen(title);
    int len2 = strlen(author);
    this->pages = pages;

    this->title = new char [len+1];
    this->author = new char [len2+1];
    strcpy(this->title,title);
    strcpy(this->author,author);
}

Book::Book(const Book& c){
    
    int len = strlen(c.title);
    this->title = new char [len+1];
    strcpy(this->title, c.title);
    int len2 = strlen(c.author);

    
    this->price = c.price;
    this->author = new char [len2+1];
    strcpy(this->author,c.author);
    cout << "복사 생성자 실행. 원본객체의 이름" << this->title << endl;
}

Book::~Book(){  // 소멸
    if(title)
        delete [] this->title;
    if(author)
        delete [] this->author;
}

void Book::set(const char* title, const char* author, int price, int pages){
   if(title)
        delete [] this->title;
    if(author)
        delete [] this->author;

   int len = strlen(title);
   this->title = new char [len+1];
   strcpy(this->title, title);
   
   int len2 = strlen(author);
   this->author = new char [len2+1];
   strcpy(this->author, author);
   
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