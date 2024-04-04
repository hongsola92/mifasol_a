#include <iostream>
using namespace std;
#include "Exp.h"
#include <cmath>

// 멤버함수
int Exp::getValue()
{
    int result = 1;
    for(int i=0; i <exp; i++){
        result = result * this -> base;
    }
    return result;
}

int Exp::getBase() { return this -> base; }
int Exp::getExp() { return this -> exp; }
bool Exp::equals(Exp other)
{
    return (getBase() == other.getBase());
}

// 생성자, 소멸자
Exp::Exp()
{
    base = 1;
    exp = 1;
}
Exp::Exp(int base)
{
    this -> base = base;
    exp = 1;
}
Exp::Exp(int base, int exp)
{
    this -> base = base;
    this -> exp = exp;
}
