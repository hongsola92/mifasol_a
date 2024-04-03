#include <iostream>
using namespace std;

class PriviaeAccessError {
private:
  
public:
    int a;
    void f();
    PriviaeAccessError ();
    int b;
    PriviaeAccessError(int x);
    void g();
};

PriviaeAccessError::PriviaeAccessError(){
    a = 1;
    b = 1;
}
PriviaeAccessError::PriviaeAccessError(int x) {
    a = x;
    b = x;
}
void PriviaeAccessError::f() {
    a = 5;
    b = 5;
}

void PriviaeAccessError::g() {
    a = 6;
    b = 8;
}

int main()
{   
    PrivateAccessError objA;
    PrivateAccessError objB(100);
    objB.a = 10;
    objB.b = 20;
    dbjB.f();
    objB.g();
}


}