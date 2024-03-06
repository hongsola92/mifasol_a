#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	srand(time(NULL)); 		// seed 값을 주는 것.
	
	for (int i = 1; i <= 10; ++i) {
		int dice = rand() % 6 + 1;        // random number (임의의 숫자)
		printf("%d\n", dice);	
	}

	return 0;
}
