#include <iostream>
using namespace std;
// 동적 할당 및 반환
int main(){
    int *p = new int[5];

    // 5개 입력받기
    for (int i = 0; i < 5; i++){
        cout << i+1 << "번째 정수";
        cin >> p[i];
    }

    int sum = 0;
    for (int i = 0; i<5; i++)
        sum += p[i];
    cout << "평균 =" << (double)sum/5.0 << endl;

    delete []p; //소멸?
}