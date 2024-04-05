#include <iostream>
using namespace std;
// 선언
class Color
{
    int red, green, blue;

public:
    Color();
    Color(int r, int g, int b);
    void setColor(int r, int g, int b);
    void show();
};

// 구현
Color::Color()
{
    red = green = blue = 0;
}

Color::Color(int r, int g, int b)
{
    red = r;
    green = g;
    blue = b;
}

void Color::setColor(int r, int g, int b)
{
    red = r;
    green = g;
    blue = b;
}

void Color::show()
{
    cout << red << ' ' << green << ' ' << blue << endl;
}

int main()
{
    Color screenColor(255, 0, 0); // 빨간색의 screenColor 객체 생성
    Color *p;                     // Color 타입의 포인터 변수 p 선언
    p = &screenColor;             // (1) p가 screenColor의 주소를 가지도록 코드 작성
    p->show();                    // (2) p와 show()를 이용하여 screenColor 색 출력
    Color colors[3];              // (3) color의 일차원 배열 color선언. 원소는 3개
    p = colors;                  // (4) p가 colors 배열을 가리키도록 코드 작성

    // (5) p와  setColor()를 이용하여 colors[0], colors[1], colors[2]가 각각
    // 빨강, 초록, 파랑을 가지도록 코드 작성
    p[0].setColor(255, 0, 0); // 빨간
    p[1].setColor(0, 255, 0); // 초록이
    p[2].setColor(0, 0, 255); // 파랭이
    
    //  for 문 이용해서 colors배열 모든 객채 색 나타내기
    for (int i = 0; i < 3; i++)
    {
        p[i]. show();
    }
}