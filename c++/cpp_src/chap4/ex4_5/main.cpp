#include <iostream>
using namespace std;

int main(void){
    int *p;

    p = new int;    //int 타입 1개 할당
    if(!p){ //if (P == 0) 또는 if (P == NULL)으로도 가능
        cout << "메모리를 할당할 수 없슈";
        return -1;
    }
    *p = 5;
    int n = *p;
    cout << "*p = " <<*p << endl;
    cout << "n = " << n << endl;

    delete p;
    cout << "*p = " <<*p << endl;   //쓰레기값이나옴
    cout << "n = " << n << endl;
}