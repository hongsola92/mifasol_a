#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);
	
	int isLeap;
	isLeap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
	//isLeap = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
	printf("%d is a leap : %d\n", year, isLeap);
return 0;
}
// 2024년이 윤달임이 참이라고 가정하에 만든 코드.
