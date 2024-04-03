#include <iostream>
using namespace std;

//클래스 선언
class Circle{
public:
    int radius;                 //멤버 변수(속성, 정보)
    double getArea(void);       //멤버 함수(행동, 행위)
};

//클래스 구현 (보통 함수 구현)
double Circle::getArea(void)
{
    return 3.14 * radius * radius;
}

//클래스 선언
class Circle{
public:
    int radius;             // 멤버변수 (속성,정보)
    Circle();               // 생성자 함수
    Circle(int r);          // 매개변수가 있는 생성자 함수
 
    double getArea();   // 멤버 함수(행동,행위)
};

//클래스 구현
// 생성자 함수 : 객체가 생성될때 자동으로 호출되는 함수
Circle::Circle() : Circle(1){ }
Circle::Circle(){
    radius = r;
    cout << "반지름" << radius << "원 생성" << endl;

}

double Circle::getArea(void)
{
    return 3.14 radius * radius;
}



int main()
{    Circle donut;
    //donut.radius = 1;
    // double area = donut.getArea();
    // cout << "donut의 면적은 " << area << endl;
    
    Circle pizza(30);
    // pizza.radius = 30;
    // area = pizza.getArea();
    // cout << "pizza의 면적은 " << area << endl;
   
    // Circle Box;
    // Rectangle box;
    // box.width = 100;
    // box.height = 150;
    // area = box.getArea();
    // cout << "box의 면적은 " << area << endl;

    return 0;
}