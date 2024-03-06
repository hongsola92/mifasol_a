#include <stdio.h>

int main (void)
{
	for (int i= 1; i<= 5; ++i) {
		for (int j= 1; j <= 5-i; ++j){
			printf(" ");
	}	for (int m =1; m <= 2*i-1; ++m) {
			printf("*");
	
}
	printf("\n");
}
return 0;
}
