#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	int absoluteValue;
	
	absoluteValue = (num >= 0) ? num : -num;
	
	printf("abs value : %d\n", absoluteValue);
	
return 0;
}
