#include <stdio.h>

int sumArray(const int *pArr, int size) // constant = const 상수
//int sumArray(int pArr[], int size) // 4번줄 pArr[] = 포인터다.
//int sumArray(int pArr[10], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum = sum + pArr[i];			// 포인터식으로 쓰면 *(pArr +i)
	}
	return sum;
}

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
	
	int sum;
	sum = sumArray(nums, 10);		// sum = sumArray(&nums[0]);
	//sum = sumArray(nums + 5, 5); //맨뒤쪽에 있는 5개 합을 구해달란 이야기임.	
	// &sums[5]
	printf("sum: %d\n", sum);
	return 0;
}
