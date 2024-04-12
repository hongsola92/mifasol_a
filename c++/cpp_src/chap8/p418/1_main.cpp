#include <iostream>
#include <string>
using namespace std;

class Circle
{
    int radius;
public:
    Circle(int radius=0);
    int getRadius();
    void setRadius(int radius);
    double getArea();
};

Circle::Circle(int radius)
{
    this->radius = radius;
}
int Circle::getRadius()
{
    return radius;
}

void Circle::setRadius(int radius)
{
    this->radius = radius;
}

double Circle::getArea()
{
    return 3.14*radius*radius;
}

class NamedCircle: public Circle
{
    string name;
public:
    NamedCircle(int radius = 0, string name= "");
    void show();
};

NamedCircle::NamedCircle(int radius, string name)
{
    setRadius(radius);
    this->name = name;
}

void NamedCircle::show()
{
    cout << "반지름이 " << getRadius() << "인 " << name << endl;
}

int main(void)
{
    NamedCircle waffle(3, "waffle");    // 반지름이 3이고 이름이 waffle인 원
    waffle.show();

    return 0;
}