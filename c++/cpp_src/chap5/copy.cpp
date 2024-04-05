#include <iostream>
using namespace std;

int main() 
{
    int a = 10, b = 20;
    int *pa = &a;
    int *pb = &b;

    cout << a << ", " << b << endl;
    cout << *pa << ", " << *pb << endl;

    pa = pb;  // 주소값만 서로 교환함. 
    cout << *pa << ", " << *pb << endl; // 출력하면 b값만 나오게 된다.
}

