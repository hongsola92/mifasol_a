#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// int nums[6] = {0};
	int nums[7] = {0};
	srand(time(NULL)); 
	
	for (int i = 1; i <= 1000; ++i) {
		int dice = rand() % 6+1 ;
	 	// nums[dice-1] = nums[dice] + 1; // --> nums[i]
		//++nums[dice-1];
		++nums[dice];
	}
/*
	for (int i = 0; i < 6; ++i) {
		printf("%d --- %d\n", i + 1, nums[i]);
}
*/
	for (int i =1; i <= 6; ++i) {
		printf("%d -- %d\n", i , nums[i]);
	}
	return 0;
}
