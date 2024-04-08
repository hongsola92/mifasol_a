#include <iostream>
#include <string>
using namespace std;

class MyIntStack
{
    int *p;
    int size;
    int tos;   // 스택의 꼭대기를 가리키는 인덱스
public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack &s);
    ~MyIntStack();
    bool push(int n); // 정수 n푸시, 꽉 차 있으면 false, 아니면 true리턴
    bool pop(int &n); // 참조변수 n // 팝하여 n에 저장. 스택이 비어 있으면 false 아니면 true 리턴.
    void tos_show();
};

MyIntStack::MyIntStack()
{
    tos = -1; // 초기화
    size = 10;
    p = new int[size];

}

MyIntStack::MyIntStack(int size){
    tos = -1;
    this->size = 10;
    p = new int[size];
}

MyIntStack::MyIntStack(const MyIntStack &s){
    this->tos = s.tos;  
    this->size = s.size;
    this->p = new int[this->size]; // p 배열 동적 할당
    for (int i = 0; i <= this->tos; ++i)
    {
        this->p[i] = s.p[i];
    }
}
MyIntStack::~MyIntStack(){
}

bool MyIntStack::push(int n)
{
    if (tos >= 9)
    {
        return false; // 스택이 가득 찼을 경우 false 반환
    }
    else
    {
        p[++tos] = n; // 스택에 값을 저장하고, 꼭대4기 위치를 증가시킴
        return true;
    }
}

bool MyIntStack::pop(int &n)
{
    if (tos < 0)
    {
        return false; // 스택이 비어있을 경우 false 반환
    }
    else
    {
        n = p[tos--]; // 스택에서 값을 꺼내고, 꼭대기 위치를 감소시킴
        return true;
    }
}

void MyIntStack::tos_show()
{
    cout << tos << endl;
}
int main()
{
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a;
    b.push(30);

    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;
}