#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 아스키 코드
/*
int main(void) {
	char a = 65;
	printf("%c\n", a);
	system("pause");
	return 0;
}
*/

// 문자 입출력 함수
/*
int main(void) {
	char a = getchar();
	printf("%c\n", a);
	system("pause");
	return 0;
}
*/

// 입력 버퍼로 인해 흔히 발생하는 오류
/*
int main(void) {
	int a;
	char c;
	scanf("%d", &a);
	printf("%d\n", a);
	scanf("%c", &c);
	printf("%c\n", c);
	system("pause");
	return 0;
}
*/

// 남아 있는 입력 버퍼를 항상 지울 수 있다.
int main(void) {
	int a; char c;
	scanf("%d", &a);
	printf("%d\n", a);
	int temp;
	// 한 자씩 받아서 파일의 끝이거나 개행 문자를 만나면 입력을 멈추므로 항상 입력 버퍼를 비운다.
	while ((temp = getchar()) != EOF && temp != '\n') { }
	scanf("%c", &c);
	printf("%c\n", c);
	system("pause");
	return 0;
} 