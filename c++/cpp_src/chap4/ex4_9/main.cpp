#include <iostream>
using namespace std;

// 클래스 선언
class Circle
{
    int radius;

public:
    Circle();// 생성자 함수
    Circle(int r);// 매개변수가 있는 생성자 함수
    ~Circle();
    void setRadius(int r) { radius = r; }
    double getArea(); // 멤버 함수(행동,행위)
};
// 구현

Circle::Circle(){
    radius = 1;
    cout <<"생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r){
    radius = r;
    cout <<"생성자 실행 radius = " << radius << endl;
}

double Circle::getArea()
{
    return 3.14 * radius * radius;
}
Circle::~Circle()
{
    cout << "소멸자 실행 radius = " << radius << endl;
}
int main(void)
{
    Circle *pArray = new Circle [3] {Circle(10),Circle(20),Circle(30)}; //초기값지정
    // pArray[0].setRadius(10);
    // pArray[1].setRadius(20);
    // pArray[2].setRadius(30);

    for (int i = 0; i < 3; i++)
    {
        cout << pArray[i].getArea() << endl;
    }
    Circle *p = pArray;
    for (int i = 0; i < 3; i++)
    {
        cout << p->getArea() << endl;
        p++;
    }

    delete[] pArray;
}