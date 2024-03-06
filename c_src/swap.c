#include <stdio.h>

int main(void)
{
	int a, b;
	a = 100;
	b = 200;
	
	printf("a: %d\tb: %d\n", a, b);
	
	// swap 문을 만드려면   tmp 변수를 쓴다.
	int tmp = a;
	a = b;
	b = tmp;
	
	printf("a: %d\tb: %d\n", a, b);

	return 0;
}
