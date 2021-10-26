#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 말머리 붙이기
/*
void dice(int input) {
	printf("찬이 던진 주사위: %d\n", input);
}

int main(void) {
	dice(3);
	dice(5);
	dice(1);
	system("pause");
	return 0;
}
*/

// 더하기 함수 만들기
/*
int add(int a, int b) {
	return a + b;
}

int main(void) {
	printf("%d\n", add(19, 98));
	printf("%d\n", add(3, 18));
	printf("%d\n", add(-19, -99));
	system("pause");
	return 0;
}
*/

// 사칙연산 함수 만들기
/*
void calculator(int a, int b) {
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("\n");
}

int main(void) {
	calculator(19, 98);
	calculator(3, 18);
	calculator(-19, -98);
	system("pause");
	return 0;
}
*/

// 재귀 함수를 이용한 팩토리얼
int factorial(int a) {
	if (a == 1) return 1;
	else return a * factorial(a - 1);
}

int main(void) {
	int n;
	printf("n 팩토리얼을 계산한다. ");
	scanf("%d", &n);
	printf("%d\n", factorial(n));
	system("pause");
	return 0;
}