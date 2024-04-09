#include <iostream>
using namespace std;

class Person{
public:
    int money;
    void addMoney(int money);

    static int sharedMoney;
    static void addshared(int n);
};

int Person::sharedMoney = 10;

void Person::addMoney(int money) 
{
    this->money += money;
}
// static 멤버 함수
void Person::addshared(int n)
{
    sharedMoney += n;
}

int main (void){
    cout << Person::sharedMoney << endl;
    Person::addshared(100);
    cout << Person::sharedMoney << endl;

    cout << "------------------------------------" << endl;
    Person han;
    han.money = 100;
    han.sharedMoney = 200;
    cout << han.sharedMoney << endl;
    cout << Person::sharedMoney << endl;

    return 0;
}