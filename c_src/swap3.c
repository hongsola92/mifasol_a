#include <stdio.h>

int a, b;		// global var 전역변수 / 함수 안에 쓰면 지역변수 (함수 블록안에서 함수 시작하면 사용되고 끝날때 사라짐.)

void swap() 	//
{
	int tmp = a;
	a = b;
	b = tmp;
}



int main(void)
{
	
	a = 100;
	b = 200;
	
	printf("a: %d\tb: %d\n", a, b);
	
	swap();		// 인자 전달 안해도 됨.

	printf("a: %d\tb: %d\n", a, b);

	return 0;
}



	/* swap 문을 만드려면   tmp 변수를 쓴다.
	int tmp = a;
	a = b;
	b = tmp;*/
	
