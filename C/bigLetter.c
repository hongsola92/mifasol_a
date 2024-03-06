#include <stdio.h>

int main(void)
{
	char ch;
	printf("input char: ");
	scanf("%c", &ch);
	
	if (ch >= 'A' && ch<= 'Z'){
		printf("%c is a big Letter\n", ch);
	}
	else {
	// else는 쓸 필요가 없음. 이유: 한가지 선택지라서.
	}
return 0;
}
