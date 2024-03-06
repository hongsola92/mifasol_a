#include <stdio.h>

int main (void)
{
	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <= 5; ++j) {

		printf( ( i == j || i+j ==6) ? "*" : " ");
}	
	printf("\n");
}
return 0;
}

/* #include <stdio.h>

int main (void)
{
	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <= 5; ++j) {

			// '*' or ' ' 공백 또는 별표 할것임.
 	if (i + j == 6 || i == j) {
		printf("*");
}
	
		else {
			printf(" ");
	}
	printf("\n");
}
return 0;
} */

