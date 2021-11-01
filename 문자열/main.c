#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 문자열과 포인터
/*
int main(void) {
	char* a = "Hello World";
	printf("%s\n", a);
	system("pause");
	return 0;
}
*/
/*
int main(void) {
	char* a = "Hello World";
	printf("%c\n", a[1]);
	printf("%c\n", a[4]);
	printf("%c\n", a[8]);
	system("pause");
	return 0;
}
*/

// 문자열 입출력 함수
/*
int main(void) {
	char a[100];
	gets(a);
	printf("%s\n", a);
	system("pause");
	return 0;
}
*/
/*
int main(void) {
	char a[100];
	gets_s(a, sizeof(a));
	printf("%s\n", a);
	system("pause");
	return 0;
}
*/

// 문자열 처리를 위한 다양한 함수
/*
int main(void) {
	char a[20] = "Chan Kim";
	printf("문자열의 길이: %d\n", strlen(a));
	system("pause");
	return 0;
}
*/
/*
int main(void) {
	char a[20] = "Chan Kim";
	char b[20] = "Seock Kim";
	printf("두 배열의 사전 순 비교: %d\n", strcmp(a, b));
	system("pause");
	return 0;
}
*/
/*
int main(void) {
	char a[20] = "My Name";
	char b[20] = "Chan Kim";
	strcpy(a, b);
	printf("복사된 문자열: %s\n", a);
	system("pause");
	return 0;
}
*/
/*
int main(void) {
	char a[20] = "My name is ";
	char b[20] = "Chan Kim";
	strcat(a, b);
	printf("합쳐진 결과 문자열: %s\n", a);
	system("pause");
	return 0;
}
*/
int main(void) {
	char a[20] = "I like you";
	char b[20] = "like";
	printf("찾은 문자열: %s\n", strstr(a, b));
	system("pause");
	return 0;
}