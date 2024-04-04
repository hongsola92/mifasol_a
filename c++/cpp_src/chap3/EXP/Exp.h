
#ifndef EXP_H
#define EXP_H

class Exp {
public:
    // 멤버변수
    int base;
    int exp;
    
    // 멤버함수
    int getValue();
    int getBase();
    int getExp();
    bool equals(Exp other);

    //생성자, 소멸자
    Exp();
    Exp(int base);
    Exp(int base, int exp);
};

#endif // EXP_H