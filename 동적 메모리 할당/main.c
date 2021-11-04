#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

// 동적 메모리 할당 함수
/*
int main(void) {
	int* a = malloc(sizeof(int));
	printf("%d\n", a);
	*a = malloc(sizeof(int));
	printf("%d\n", a);
	system("pause");
	return 0;
}
*/
/*
int main(void) {
	int* a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a);
	a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a);
	system("pause");
	return 0;
}
*/

// 동적으로 문자열 처리하기
/*
int main(void) {
	char* a = malloc(100);
	memset(a, 'A', 100);
	for (int i = 0; i < 100; i++) {
		printf("%c ", a[i]);
	}
	system("pause");
	return 0;
}
*/

// 동적 메모리 할당의 다양한 예제
int main(void) {
	int** p = (int**)malloc(sizeof(int*) * 3);
	for (int i = 0; i < 3; i++) {
		*(p + i) = (int*)malloc(sizeof(int) * 3);
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			*(*(p + i) + j) = i * 3 + j;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
	system("pause");
	return 0;
}