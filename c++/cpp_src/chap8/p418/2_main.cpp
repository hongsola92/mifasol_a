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
    void setNamedCircle(int radius, string name);
    void show();
};

NamedCircle::NamedCircle(int radius, string name)
{
    setRadius(radius);
    this->name = name;
}

void NamedCircle::setNamedCircle(int radius, string name)
{
    setRadius(radius);
    this->name = name;    
}

void NamedCircle::show()
{
    cout << "5 개의 정수 반지름과 원의 이름을 입력하세요." << endl;
}

int main(void)
{
    int r;
    string n;

    NamedCircle pizza[5];

    cout << "5 개의 정수 반지름과 원의 이름을 입력하세요." << endl;

    for(int i=0; i < 5; i++)
    {
        cout <<i+1 << ">>";
        cin >> r >> n;
        pizza[i].setNamedCircle(r,n);
        pizza[i].show();
    }
    return 0;
}

