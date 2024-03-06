#include <stdio.h>
#include <time.h>
#include "rand.h"



void my_srand(int s);		//function declaration
int my_rand(void);

int main(void)
{
/*	int seed;
	srand(time(NULL), &seed);
	
	seed = 0;
	
	int vlue =rand(&seed)
	*/
	
	my_srand(time(NULL));
	for (int i = 1; i <= 10; ++i) {
		int value = my_rand();
	printf("value: %d\n", value);
	}	
	return 0;
}

