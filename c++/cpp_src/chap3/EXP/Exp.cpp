// 클래스 구현
#include <iostream>
using namespace std;
#include "Exp.h"
#include <cmath>

// 멤버함수
int Exp::getValue()
{
    // int result = 1;
    // for(int i=0; i <ex; i++){
    //     result = result * base;
    // }
    // return true;
    int result;
    result = pow(base, ex);
    return result;
}
int Exp::getBase() { return base; }
int Exp::getExp() { return ex; }
bool Exp::equals(Exp other)
{
    return (getBase() == other.getBase());
}

// 생성자, 소멸자
Exp::Exp()
{
    base = 1;
    ex = 1;
}
Exp::Exp(int b)
{
    base = b;
    ex = 1;
}
Exp::Exp(int b, int e)
{
    base = b;
    ex = e;
}
