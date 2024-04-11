#include <iostream>
using namespace std;

class Rect;
bool equals(Rect r, Rect s);                                        // 일반 함수 선언

class Rect {                                  
    int width, height;
public:
    Rect(int width, int height);                            // 클래스 선언
     
    friend bool equals(Rect r, Rect s);                 // 프렌드 함수 선언
};

                                                            // 클래스 구현
Rect::Rect(int width, int height)
{
    this -> width = width; 
    this-> height = height; 
}


//-------------------------main------------------------
int main(void) {
    Rect a(3,4), b(4,5);
    if(equals(a,b)) cout << "equal" << endl;
    else cout << "not equal" << endl;

    return 0;
}
//-------------------- user function ------------------
                                                                    // 일반 함수 구현
bool equals(Rect r, Rect s)
{
    if(r.width == s.width && r.height == s.height) 
        return true;
        else return false;
}