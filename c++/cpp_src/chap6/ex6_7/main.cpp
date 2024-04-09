#include <iostream>
using namespace std;

float square(float a) {
    return a*a;
}

double square(double a) {   // 소멸되지앟는 정수

    return a*a;
}

int main() {
    cout << square(3.0);// 오류를 고치려면cout (double a); 호출
    cout << square(3);  // 이 두 합수중 어떤 함수를 호출하는지 알 수 없다는 것
} 
