#include <iostream>
using namespace std;

//참조의 대한 내용
int main() 
{
    int a, b;
    int &op1 = a, &op2 = b; // &을 붙여줌으로서 참조(별칭)할수가 있음.

    int sum = op1 +op2;
    int sub = op1 -op2;
    int mul = op1 *op2;
    int div = op1 /op2;
}