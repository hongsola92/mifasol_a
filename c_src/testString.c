#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str1 = "hello, world";
	int len = strlen(str1);

	printf("len : %d\n", len);

	char str2[13];
	//char *str2; >>> 이대로 하면 세그멘테이션 오류뜸.
	//char str2[12]; >>> 범위를 벗어나게 쓰면 안됨. 출력은 가능하나 안쓰는것이 좋음.
	strcpy(str2, str1); //() 안에 앞쪽은 들어갈 위치에 주소값을 주는것 

	printf("str2: %s\n", str2);
	
	if (strcmp(str1, str2) == 0) {
		printf("str1, and str2 are equal\n");
	}else {
		printf("str1 and str2 are not equal\n");
	
	}
	
	return 0;
}
