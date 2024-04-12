#include <iostream>
#include <string>
using namespace std;

class Point
{
protected:
    int x,y;
public:
    Point(int x = 0, int y = 0);
    void set(int x, int y);     // 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
    void showPoint();
};

Point::Point(int x, int y)
{
    this-> x = x;
    this-> y = y;
}

void Point::set(int x, int y)
{
    this-> x = x;
    this-> y = y; 
}

void Point::showPoint()
{
    cout <<"(" << this -> x << "," << this -> y << ")" << endl; 
}

class ColorPoint: public Point 
{
    string color;
public:
    void setColor(string color);
    void showColorPoint();
    bool equals(ColorPoint p);
};

void ColorPoint::setColor(string color)
{
    this -> color = color;
}

void ColorPoint::showColorPoint()
{
    cout << color << ":";
    this-> showPoint();
}

bool ColorPoint::equals(ColorPoint p)
{
    if(x == p.x && y == p.y && color == p.color)
        return true;
    else
        return false;
}

int main(void){
    Point p;    // 기본 클래스의 객체 생성
    p.set(2,3);
    // p.x = 5;
    // p.y = 5;
    // cp.x = 10;
    p.showPoint();

    ColorPoint cp;
    // cp.x = 10;
    // cp.y = 10;
    cp.set(3,4);
    cp.setColor("Red");

    ColorPoint cp2;
    cp2.set(3,4);
    cp2.setColor("Red");
    cout << ((cp.equals(cp2))?"true" : "false");
}


