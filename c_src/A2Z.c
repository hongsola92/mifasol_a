#include <stdio.h>
int main(void)
{
	//int code;
	//scanf("%d", &code);
	
	//int isBig = (code >= 65 && code <= 90);
	
	char code;
	scanf("%c", &code);
	
	int isBig = (code >= 'A' && code <= 'Z');
	
	printf("%c --- is big : %d\n", code, isBig);
return 0;
}
