#include <iostream>
using namespace std;

//클래스 선언
class Circle{
    int radius;
public:
    Circle() { radius = 1;}               // 생성자 함수
    Circle(int r) {radius =r;}          // 매개변수가 있는 생성자 함수
    double getArea();   // 멤버 함수(행동,행위)
};

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main()
{   
    Circle dount;
    Circle pizza(30);

    cout << dount.getArea() << endl;

    Circle *p;
    p = &dount;
    cout << p->getArea() << endl;
    cout << (*p).getArea() << endl;

    p = &pizza;
    cout << p->getArea() << endl;
    cout << (*p).getArea() << endl;

    return 0;
}