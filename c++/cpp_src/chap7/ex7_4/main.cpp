#include <iostream>
using namespace std;
// class Power;
// 일반 함수 선언
// Power sum(Power a,Power b);

class Power 
{
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0)
    { this -> kick = kick; this -> punch = punch;}
    //Power sum(Power op);
    void show();
    Power operator+(Power op2);
    Power operator-(Power op2);
    Power operator+(int op2);
    bool operator==(Power op2);
    Power operator+=(Power op2);
    friend Power sum (Power a, Power b);
};
// Power Power::sum(Power op)
// {
//     Power tmp;
//     tmp.kick = this->kick + op.kick;
//     tmp.punch = this->punch + op.punch;

//     return tmp;
// }

void Power::show()
{
    cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator+(Power op2)
{
    Power tmp;
    tmp.kick = this->kick + op2.kick;
    tmp.punch = this -> punch + op2.punch;
    return tmp;
}
Power Power::operator+(int op2)
{
    Power tmp;
    tmp.kick = this->kick + op2;
    tmp.punch = this -> punch + op2;
    return tmp;
}
Power Power::operator-(Power op2)
{
    Power tmp;
    tmp.kick = this->kick - op2.kick;
    tmp.punch = this -> punch - op2.punch;
    return tmp;
}

bool Power::operator==(Power op2)
{
    if(kick == op2.kick && punch == op2.punch)
    return true;
    else return false;
}

Power Power::operator+=(Power op2)
{
    this->kick = this->kick + op2.kick;     //this->kick += op2.kick;
    this->punch = this->punch + op2.punch;
    return *this;       // 포인터 안에 값을 넘겨주는것.
}
int main()
{
    Power a(3,5), b(4,6), c, d, e;
    //c = sum(a,b);
    //c= a.sum(b);
    c = a + b;
    d = a - b;
    if(a == b) cout << "두 파워가 같다." << endl;
    else cout <<"두 파워가 같지 않다." << endl;
    a += b;
    e = a;

    a.show();
    b.show();
    c.show();
    d.show();
    e.show();
}
// 일반 함수 구현
// Power sum(Power a, Power b)
// {
//     Power res;
//     res.kick = a.kick + b.kick;
//     res.punch = a.punch + b.punch;
    
//     return res;
// }