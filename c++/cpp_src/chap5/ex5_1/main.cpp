#include <iostream>
using namespace std;
// 클래스 선언
class Circle{
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea() { return 3.14*radius*radius; }
    int getRadius() { return radius;}
    void setRadius(int radius) { this ->radius = radius;}
};
// 구현
Circle::Circle() {
    radius = 1;
cout << "생성자 실행 radius =" << radius << endl;
}
Circle::Circle(int radius){
    this->radius = radius;
    cout <<"생성자 실행 radius=" << radius << endl;

}
Circle::~Circle(){
    cout <<"소멸자 실행 radius=" << radius << endl;
}

// 값에 의한 호출
// 생성자는 호출되지 않고 소멸자만 호출 된다. => 넘어오는 값이 초기화 되기 때문.
void increase (Circle c) {      // Circle c 객체 생성됨 
    int r = c.getRadius();      // c에 waffle내용을 담음
    c.setRadius(r+1);        
}   

int main(){
    Circle waffle(30);
    increase(waffle);   // waffle 내용을 가져옴
    cout << waffle.getRadius() << endl;
}