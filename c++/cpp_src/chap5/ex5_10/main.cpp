//얕은복사와 깊은복사 알아보기.

#include <iostream>
#include <cstring>
using namespace std;

class Person {
    int id;
    char *name;

public:
    Person(int id, const char *name);       //여기서 *name은 기태를 가리킴
    Person(const Person& c); // 복사 생성자 (깊은복사), 이게 없으면 얕은복사가 됨.
    ~Person(); // 소멸자
    void changeName(const char *name);
    void show(){cout << id <<',' << name << endl;}
};

Person::Person(int id, const char *name){
    this->id = id;
    int len = strlen(name);  // strlen은 NULL문자를 포함하지 않음.  // name의 문자 개수
    
    this->name = new char [len+1];  // name 문자열 공간 할당 ((len +1을 함으로써 NULL 문자 까지 포함하게함.))
    strcpy(this->name,name); // name에 문자열 복사
}

Person::Person(const Person& c){
    this->id = c.id;
    int len = strlen(c.name);
    this->name = new char [len+1];
    strcpy(this->name,c.name);    
}

Person::~Person(){
    if(name)        // 만일 name에 동적 할당된 배열이 있으면
        delete []name;  // 동적 할당 메모리 소멸
}

void Person::changeName (const char* name) {// 이름변경
    if(strlen(name) > strlen(this->name))
        return; // 현재 name에 할당된 메모리보다 긴 이름으로 바꿀 순 없음.
    strcpy(this->name, name);
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

