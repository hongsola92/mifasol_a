#include <stdio.h>
#include <stdlib.h>			// malloc 함수 쓰려면 stdlib.h 써야함.

int main(void)
{
	int size;
	printf("input size: ");
	scanf("%d", &size);
	
	//int nums[size];			// c99 년 이후로 됨.
	int *pArr = malloc(sizeof(int) * size);
	
	for (int i = 0; i < size; ++i) {
		//nums[i] = i +1;	
		pArr[i] = i + 1;
	} 
	for (int i = 0; i < size; ++i) {
		printf("%d ", pArr[i]);
	}
	printf("\n");
	
	free(pArr);			// malloc을 쓸때엔 ★반드시★ 쌍으로 free함수 씀.!!!!
	return 0;
}
