//얕은복사와 깊은복사 알아보기.

#include <iostream>
#include <string>
using namespace std;

class Person {
    int id;
    string name;

public:
    Person(int id, const string name);       //여기서 *name은 기태를 가리킴
    Person(const Person& c); // 복사 생성자 (깊은복사), 이게 없으면 얕은복사가 됨.
    ~Person(); // 소멸자
    void changeName(const string name);
    void show(){cout << id <<',' << name << endl;}
};

Person::Person(int id, const string name){
    this->id = id;
    this -> name = name;  
}
Person::Person(const Person& c){
    this->id = c.id;
    this->name = c.name;
}

Person::~Person(){
}

void Person::changeName (const string name) {// 이름변경
    this->name = name;
}
int main() 
{
    Person father(1, "Kitae");
    Person daughter(father);

    cout << "daughter 객체 생성 직후 ---" << endl;
    father.show();
    daughter.show();

    daughter.changeName("Grace");
    cout <<" daughter 이름을 Grace로 변경한 후 ---" << endl;
    father.show();
    daughter.show();

    return 0;
}

