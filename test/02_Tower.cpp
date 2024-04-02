// #include <iostream>
// using namespace std;

// class Tower {
// public:
//     int Height;  // 높이
//      // 생성자
//     Tower() {
//         Height = 1;  // 기본 높이를 1로
//     }
//     Tower(int h) {
//         Height = h;
//     }
//     ~Tower(){
//         cout <<"소멸자가 호출됐습니다."<< endl;
//     }
    
//     // 높이를 나타낼
//     int getHeight() {
//         return Height;
//     }
// };

// int main() {
//     Tower myTower;
//     Tower soeulTower(100);  
//     cout << "높이는 " << myTower.getHeight() << "미터" << endl;
//     cout << "높이는 " << soeulTower.getHeight() << "미터" << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

class Tower {
public:
    // 생성자
    int Height;  // 높이
    int getHeight();
    Tower();
    Tower(int h);
    ~Tower();
};    

    // 높이를 나타낼
    int Tower::getHeight() {
        return Height;
    }

    // 구현
    Tower::Tower() {
        Height = 1; 
    }
    Tower::Tower(int h) {
        Height = h;
    }

    // 소멸
    Tower::~Tower(){
        cout <<"소멸자가 호출됐습니다."<< endl;
    }


int main() {
    Tower myTower;
    Tower soeulTower(100);  
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << soeulTower.getHeight() << "미터" << endl;
    return 0;
}