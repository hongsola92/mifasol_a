#include <stdio.h>

int main(void)
{
	int num;
	printf("num:  ");
	scanf("%d", &num);
	
	
// if (num % 2 /*==1*/) {               // /*... */ 주석문을 써줌으로써 생략할수 있음. 
//	printf("%d is a odd\n,", num);
//	} else {
//	printf("%d is a even\n,", num);
//	}

	printf("%d is a %s number\n", num, (num % 2 ) ? "odd" : "even");
	
	return 0;
}
