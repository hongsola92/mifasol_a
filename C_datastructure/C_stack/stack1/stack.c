#include <stdio.h>

// 전역 공간에 배열 생성
int stack[100];    // 크기가 100인 전역 배열 'stack'을 선언. 이 배열이 스택의 저장 공간이 됨.
int tos;    //  'tos'는 스택의 top을 가리키는 변수로, 데이터가 들어갈 위치를 가리킴

void push(int data)
{
    stack[tos] = data;
    tos++;    // 'tos'를 1 증가시켜 다음에 데이터를 넣을 위치를 가리키게 함.
}

int pop(void)
{
    tos--;
    return stack[tos];    // 'stack' 배열의 'tos' 위치에 있는 데이터를 반환.
}

int main(void)
{
    push(100);    // 스택에 100을 넣습니다. tos는 0에서 1로 증가.
    push(200);    // 스택에 200을 넣습니다. tos는 1에서 2로 증가.
    push(300);

    printf("1st pop : %d\n", pop());     //스택에서 데이터를 꺼내 출력합니다. 300이 출력되고 tos는 2로 감소.
    printf("2nd pop : %d\n", pop());
    printf("3rd pop : %d\n", pop());

    return 0;
}
