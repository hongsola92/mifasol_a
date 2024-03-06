#include <stdio.h>

int main(void)
{
	int score;
	printf("input score: ");
	scanf("%d", &score);

 printf("score : %d -- %s\n", score,(score >=60) ? "pass" : "fail");
 




/*
	if (score >= 60){
	printf("score : %d --- pass\n,", score);
	} else {
	printf("score : %d -- Fail\n", score);
	}
*/
	return 0;
}
