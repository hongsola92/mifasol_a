#include <iostream>
using namespace std;

int main(){
    int n;
    while(1)
    {
        while(1){
            cout << "입력할 정수의 개수는?";
            cin >> n;   // 정수의 개수 입력
            if(n <=0) continue;
            break;
        }
            // cin >> n;
            // if(n <= 0) return 0;
            int *p = new int[n];
            if(!p){
                cout << "메모리를 할당할수 없음";
                return 0;
            }

            for(int i = 0; i <n; i++) {
                cout << i+1 <<"번째 정수:";
                cin >> p[i];
            }
            int sum = 0;
            for(int i = 0; i < n; i++)
                sum +=p[i];
            cout <<"평균 =" << sum/n << endl;
            delete [] p;    // 배열 메모리 반환
    }
}