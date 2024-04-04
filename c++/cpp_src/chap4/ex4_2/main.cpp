#include <iostream>
using namespace std;
// 선언
class Circle
{
    int radius;

public:
    Circle() { radius = 1; }      // 생성자 함수
    Circle(int r) { radius = r; } // 매개변수가 있는 생성자 함수
    double getArea();             // 멤버 함수(행동,행위)
    void setRadius(int r);
};

// 구현

// Circle(); << 생성자 함수 선언 >> 구현을 하면 Circle::Circle() : Circle(1){} 이 된다.
double Circle::getArea(void)
{
    return 3.14 * radius * radius;
}
void Circle::setRadius(int r)
{
    radius = r;
}

int main(void)
{
    Circle CircleArray[3];

    CircleArray[0].setRadius(10);
    CircleArray[1].setRadius(20);
    CircleArray[2].setRadius(30);

    for (int i = 0; i < 3; i++)
        cout << "Circle" << i << "의 면적은" << CircleArray[i].getArea() << endl;

    Circle *p;
    p = CircleArray;
    for(int i = 0; i < 3; i++){
        cout <<"Circle" <<i << "의 면적은" << p->getArea() <<endl;
        p++;
    }       // p++는 배열의 다음 원소를 가리킨다.
    return 0;
}