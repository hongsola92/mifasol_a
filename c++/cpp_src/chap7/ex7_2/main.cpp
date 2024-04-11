#include <iostream>
using namespace std;

                //클래스 선언
class Rect;

                // 클래스 선언
class RectManager
{
public:
    bool equals(Rect r, Rect s);
};
                // 클래스 선언2
class Rect {                                  
    int width, height;
public:
    Rect(int width, int height);
                // 프렌드 함수 선언
    friend bool RectManager::equals(Rect r, Rect s);
};
                // 클래스 구현1
bool RectManager::equals(Rect r, Rect s)
{
    if(r.width == s.width && r.height == s.height) 
        return true;
        else return false;    
}
                // 클래스 구현2             
Rect::Rect(int width, int height)
{
    this -> width = width; 
    this-> height = height; 
}


//-------------------------main------------------------
int main(void) {
    Rect a(3,4), b(4,5);
    RectManager man;
    
    if(man.equals(a,b)) cout << "equal" << endl;
    else cout << "not equal" << endl;

    return 0;
}

