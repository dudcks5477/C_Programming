#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��Ģ����
/*
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	system("pause");
	return 0;
}
*/

// �̽������� ������(Escape Sequence)
/*
int main(void) {
	printf("\"A\tB\tC\tD\"\n");
	printf("\"A\tB\tC\tD\"\n");
	printf("\"A\tB\tC\tD\"\n");
	system("pause");
	return 0;
}
*/

// ���� ������
/*
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a > b);
	system("pause");
	return 0;
}
*/

// �� ������
/*
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", !a);
	printf("%d\n", a && b);
	printf("%d\n", (a > b) && (b > c));
	system("pause");
	return 0;
}
*/

// ���� ������
int main(void) {
	int a = 9, b = 8;
	printf("%d\n", (a == b) ? 100 : -100);
	system("pause");
	return 0;
}