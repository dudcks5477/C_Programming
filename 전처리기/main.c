#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "temp.h"
#define PI 3.1415926535
#define POW(x) (x * x)
#define ll long long
#define ld long double
#include "temp.h"

/*
int main(void) {
	printf("%d\n", add(3, 7));
	system("pause");
	return 0;
}
*/

// 내가 정의한 헤더 파일 사용하기
/*
int main(void) {
	int a = 98, b = 3;
	printf("%d\n", add(a, b));
	system("pause");
	return 0;
}
*/

// 매크로 전처리기
/*
int main(void) {
	int r = 10;
	printf("원의 둘레: %.2f\n", 2 * PI * r);
	system("pause");
	return 0;
}
*/

// 인자를 가지는 매크로 전처리기
/*
int main(void) {
	int x = 10;
	printf("x의 제곱: %d\n", POW(x));
	system("pause");
	return 0;
}
*/
/*
int main(void) {
	ll a = 987654321000;
	ld b = 100.5054;
	printf("%.1f\n", a * b);
	system("pause");
	return 0;
}
*/

// 조건부 컴파일
/*
int main(void) {
	printf("%d\n", add(3, 5));
	system("pause");
	return 0;
}
*/

// 파일 분할 컴파일
int main(void) {
	printf("%d\n", add(3, 5));
	system("pause");
	return 0;
}