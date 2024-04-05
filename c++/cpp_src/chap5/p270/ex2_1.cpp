#include <iostream>
using namespace std;

// 참조 매개변수를 사용하여 입력값의 반값을 계산하고 입력값을 변경한다.
 void half(double &num) {   // 선언과 정의를 동시에 함.
    num /= 2;       // 입력값의 반으로 나누기
    
    }

int main() 
{
   
    double n = 20;
    half(n);    // n의 반값을 구해 n을 바꾼다.
    cout << n;  // 10이 출력
}
