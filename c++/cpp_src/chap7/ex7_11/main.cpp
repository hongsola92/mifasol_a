#include <iostream>
using namespace std;

class Power 
{
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0)
    { this -> kick = kick; this -> punch = punch;}

    void show();
    friend Power operator+(int op1, Power op2); // 프렌드 선언
};
void Power::show()
{
    cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power operator+(int op1, Power op2)
{
    Power tmp; // 임시객체 생성
    tmp.kick = op1 + op2.kick;
    tmp.punch = op1 +op2.punch;
    return tmp;
}

int main()
{
    Power a(3,5), b;
    a.show();
    b.show();
    b = 2 + a;
    a.show();
    b.show();
}