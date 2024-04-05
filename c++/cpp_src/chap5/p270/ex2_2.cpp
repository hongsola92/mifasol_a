#include <iostream>
using namespace std;


 void half(double *n) {  // 포인터로 주소를 호출하는 경우
    *n = *n / 2.0;       // 입력값의 반으로 나누기
    cout << *n <<endl;
    }

 void half(double &n) {// 참조로 호출  
    n = n / 2.0;       // 입력값의 반으로 나누기
    cout << n <<endl;
    }

int main() 
{
   
    double n = 20.0;
    half(n);    // 위에서는 주소니까 main 문에서도 주소로 해준다. '&'
    cout << n << endl;  // 10이 출력
}
