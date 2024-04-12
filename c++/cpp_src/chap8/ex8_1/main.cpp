#include <iostream>
#include <string>
using namespace std;

class Point
{
    int x,y;
public:
    Point(int x = 0, int y = 0);
    void set(int x, int y);     // 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
    void showPoint();
};

Point::Point(int x, int y)
{
    this -> x = x;
    this -> y = y;    
}

void Point::set(int x, int y)
{
    this -> x = x;
    this -> y = y;
}

void Point::showPoint()
{
    cout <<"(" << x <<"," << y << ")" << endl;
}


class ColorPoint : public Point 
{  // 2차원 평면에서 컬러점을 표현하는 클래스. colorPoint.Point를 상속받음.
    string color;
public:
    void setColor(string color);
    void showColorPoint();
};

void ColorPoint::setColor(string color)
{
    this->color = color;
}

void ColorPoint::showColorPoint()
{
    cout << color << ":";
    this-> showPoint();
}

int main(void){
    Point p;    // 기본 클래스의 객체 생성
    ColorPoint cp;  // 파생 클래스의 객체 생성
    cp.set(3,4);    // 기본 클래스의 멤버 호출
    cp.setColor("Red"); // 파생 클래스의 멤버 호출
    cp.showColorPoint();    // 파생 클래스의 멤버 호출
}


