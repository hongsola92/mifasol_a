#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
//     for(int i = 0; i < argc; i++)
//     {
//         printf("argc[%d] = %s\n\r", i, argv[i]);
//     }

    if(argc != 3) 
    printf("usage : %s <op1> <op2> op1, op2값을 입력하란 소리야.\n\r", argv[0]);
    return -1;        // 만일 argc 입력을 3개가 아니라면 리턴해라. ==> 3개일 경우 밑에 계산식을 실행하라.

    int op1 = atoi(argv[1]);
    int op2 = atoi(argv[2]);

    printf("%d + %d = %d\n\r", op1, op2, op1+op2);
    
    return 0;
}