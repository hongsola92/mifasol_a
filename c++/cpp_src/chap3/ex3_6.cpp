#include <iostream>
using namespace std;

class Rectangle{
public:
    int width, height;  //너비, 높이
    Rectangle();        //생성자
    Rectangle(int w, int h); // 생성자
    Rectangle(int length);   // 생성자
    bool isSquare();
};

Rectangle::Rectangle(){
width = height = 1;
}
Rectangle::Rectangle(int w, int h){
width =w; height = h;
}
Rectangle::Rectangle(int length){
width = height = length;
}

bool Rectangle::isSquare(){     //정사각형이면 true를 리턴하는 멤버함수
    if(width == height) return true;
    else return false;
}


int main()
{   // 3개의 생성자
    Rectangle rect1;        //rectangle()호출
    Rectangle rect2(3,5);   //rectangle(int w, int h)호출
    Rectangle rect3(3);     //rectangle(int length)호출

    if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if(rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
    if(rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}