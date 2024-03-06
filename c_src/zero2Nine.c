#include <stdio.h>

int main(void)
{
	int num;
	printf("input unm: ");
	scanf("%d",&num);
	
	//int result = (0 <= num <=9);
	int result = (0 <= num && num <=9);
	printf("[0,9]: %d\n", result);
	//[0.9] 라는 뜻은 0이상 9이하라는 뜻이다. 대괄호가 들어가있는것.
return 0;
}
