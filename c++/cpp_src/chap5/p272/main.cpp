#include <iostream>
#include <string>
using namespace std;

class MyIntStack {
    int p[10]; // 최대 10개의 정수 저장
    int tos;    // 스택의 꼭대기를 가리키는 인덱스
public:
    MyIntStack();
    bool push(int n); // 정수 n푸시, 꽉 차 있으면 false, 아니면 true리턴
    bool pop(int &n);   // 참조변수 n // 팝하여 n에 저장. 스택이 비어 있으면 false 아니면 true 리턴.
    void tos_show();
};

MyIntStack::MyIntStack() {
    tos = 0;    // 초기화
}

bool MyIntStack::push(int n) {
    if (tos >= 10) {
        return false; // 스택이 가득 찼을 경우 false 반환
    }
    else {
        p[tos++] = n; // 스택에 값을 저장하고, 꼭대기 위치를 증가시킴
        return true;
    }
}

bool MyIntStack::pop(int &n) {
    if (tos <= 0) {
        return false; // 스택이 비어있을 경우 false 반환
    }
    else {
        n = p[--tos]; // 스택에서 값을 꺼내고, 꼭대기 위치를 감소시킴
        return true;
    }
}

void MyIntStack::tos_show() {
    cout << tos << endl;
}

int main() {
    MyIntStack a;
    for (int i = 0; i < 11; i++) { // 11개를 푸시하면, 마지막에는 stack full이 됨.
        if (a.push(i)) cout << i << ' '; // 푸시된 값 에코
        else cout << endl << i + 1 << " 번째 stack full" << endl;
    }
    int n;
    for (int i = 0; i < 11; i++) {   // 11개를 팝하면, 마지막에는 stack empty가 됨.
        if (a.pop(n)) cout << n << ' '; //팝 한 값 출력
        else cout << endl << i + 1 << " 번째 stack empty";
    }
    cout << endl;
    a.tos_show();

    return 0;
}