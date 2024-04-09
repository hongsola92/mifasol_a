#include <iostream>
#include <string>
using namespace std;

class MyIntStack
{
    int *p;     // 동적 할당 공간의 '주소'를 저장할 변수
    int size;   // 동적 할당 공간의 '크기'를 저장할 변수
    int tos;    // 스택의 현재 주소값을 저장
public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack &s);
    ~MyIntStack();
    bool push(int n); // 정수 n푸시, 꽉 차 있으면 false, 아니면 true리턴
    bool pop(int &n); // 참조변수 n // 팝하여 n에 저장. 스택이 비어 있으면 false 아니면 true 리턴.
    void tos_show();
    void stack_show();
};

MyIntStack::MyIntStack()
{
    tos = 0; // 초기화
    this->size = 10;
    this->p = new int[this->size] {0};    // 사이즈 0으로 초기화
    for (int i = 0; i <10; i++) p[i] = 0;

}

MyIntStack::MyIntStack(int size)
{
    this->tos = 0; // 초기화
    this->size = 10;
    this->p = new int[this->size] {0};    // 사이즈 0으로 초기화
}

MyIntStack::MyIntStack(const MyIntStack &s){
    this->tos = s.tos;  
    this->size = s.size;
    this->p = new int[this->size] {0}; // p 배열 동적 할당
    // 배열의 요소값 복사(깊은복사), 주소복사는 안됨(얕은복사)
    for (int i = 0; i <= this->tos; i++)
    {
        this->p[i] = s.p[i]; 
    }
}
MyIntStack::~MyIntStack(){
    if(this->p) delete[] this->p;
}

bool MyIntStack::push(int n)
{
    if (tos > size)
    {
        
        return false; // 스택이 가득 찼을 경우 false 반환
    }
    else
    {
        p[tos] = n; // 스택에 값을 저장하고, 꼭대4기 위치를 증가시킴
        tos++;
        return true;
    }
}

bool MyIntStack::pop(int &n)
{
    if (tos < 1)
    {
        return false; // 스택이 비어있을 경우 false 반환
    }
    else
    {
        tos--;;
        n = p[tos];
        p[tos] = 0;
    }
}

void MyIntStack::tos_show()
{
    cout << this->tos << endl;
}

void MyIntStack::stack_show()
{
    for(int i = 0; i < this->size; i++){
        cout << p[i] <<' ';
    }
    cout << endl;
}
int main()
{
    MyIntStack a(10);
    a.tos_show();
    a.push(10);
    a.push(20);
    MyIntStack b = a; // MyIntStack b(a);, 복사 생성자 호출
    b.push(30);
    a.stack_show();
    b.stack_show();
   
    cout << "------------------------------------------------" << endl;
    int n;

    // if(a.pop(n))
    //     cout << "스택 a에서 팝한 값 " << n << endl;
    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;

    return 0;
 }