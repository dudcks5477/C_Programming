#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main(void) {
	int a;
	scanf("%d", &a);
	printf("입력한 숫자는 %d입니다.\n", a);
	system("pause");
	return 0;
}
*/

// 실수형을 입력 받아서 소수점 셋째 자리까지 출력하기
/*
int main(void) {
	double a;
	scanf("%lf", &a);
	printf("%.2f\n", a);
	system("pause");
	return 0;
}
*/

// 두 숫자를 입력 받아 순서 바꾸어 출력하기
/*
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", b, a);
	system("pause");
	return 0;
}
*/

// 한 자리 씩 끊어서 입력 받기
int main(void) {
	int a, b, c;
	scanf("%1d%1d%1d", &a, &b, &c);
	printf("%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}