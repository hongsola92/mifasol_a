#include <iostream>
using namespace std;

//클래스 선언
class Circle{
    int radius;
    int test;

public:
    Circle() { radius = 1;}               // 생성자 함수
    Circle(int r) {radius =r;}          // 매개변수가 있는 생성자 함수
    double getArea();   // 멤버 함수(행동,행위)
};

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main(void)
{
    Circle CircleArray[8] = { Circle(10), Circle(20), Circle()};
    int CircleArraySize = sizeof(CircleArray) / sizeof(CircleArray);

    cout << "CircleArraySize is  "<<  CircleArraySize << endl;
   
    for(int i = 0; i < CircleArraySize;  i++)
        cout << "Circle" <<i <<"의 면적은" << CircleArray[i].getArea() << endl;

    return 0;
}