#include <stdio.h>

int main(void){
    volatile int a=70;
    volatile int b=80;

    char name1[6] = {'T','R','a','c','e', '\0'}; 
    char name2[6] = {'G','r','a','c','e', '\0'};

    int c = a+b;
    
    printf("name1 : %s \n\r", name1);
    printf("name2 : %s \n\r", name2); 
    printf("name1 : %p \n\r", name1);
    printf("name2 : %p \n\r", name2);   
    return 0;
}