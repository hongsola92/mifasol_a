#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	int absoluteVlue =num;
	
	if (num >= 0) {
		absoluteVlue = num;
	} else {
		absoluteVlue = -num;
	}

	printf("abs value : %d\n", absoluteVlue);
	return 0;
}
/*
if (num < 0){
	num = -num;
	*/
