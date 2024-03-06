#include <stdio.h>

long long factorial (int n)
{
	long long result = 1LL;
	for (int i = 2; i <= n; ++i) {
		result = result * i;
	}
	return result;
}


int main(void)
{
	for (int i = 1; i <= 100; ++i){
		long long result = factorial(i);
		
		printf("%d! = %lld\n", i, result);
	}



	return 0;
}

// long long을 써도 20까지만 제대로 나타남.  기본형으로는 해결 x >> 확장 라이브러리를 도움 받아야함.
