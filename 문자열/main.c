#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���ڿ��� ������
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

// ���ڿ� ����� �Լ�
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

// ���ڿ� ó���� ���� �پ��� �Լ�
/*
int main(void) {
	char a[20] = "Chan Kim";
	printf("���ڿ��� ����: %d\n", strlen(a));
	system("pause");
	return 0;
}
*/
/*
int main(void) {
	char a[20] = "Chan Kim";
	char b[20] = "Seock Kim";
	printf("�� �迭�� ���� �� ��: %d\n", strcmp(a, b));
	system("pause");
	return 0;
}
*/
/*
int main(void) {
	char a[20] = "My Name";
	char b[20] = "Chan Kim";
	strcpy(a, b);
	printf("����� ���ڿ�: %s\n", a);
	system("pause");
	return 0;
}
*/
/*
int main(void) {
	char a[20] = "My name is ";
	char b[20] = "Chan Kim";
	strcat(a, b);
	printf("������ ��� ���ڿ�: %s\n", a);
	system("pause");
	return 0;
}
*/
int main(void) {
	char a[20] = "I like you";
	char b[20] = "like";
	printf("ã�� ���ڿ�: %s\n", strstr(a, b));
	system("pause");
	return 0;
}