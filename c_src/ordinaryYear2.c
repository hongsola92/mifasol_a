#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);
	
	//if(!(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)) {
	if (year % 4 !=0 || year % 100 == 0 && year % 400 != 0) {
	printf("%d is a ordinary year\n", year);
	} else {
	printf("%d is a leap year\n", year);
	}
	
	
}
