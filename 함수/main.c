#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���Ӹ� ���̱�
/*
void dice(int input) {
	printf("���� ���� �ֻ���: %d\n", input);
}

int main(void) {
	dice(3);
	dice(5);
	dice(1);
	system("pause");
	return 0;
}
*/

// ���ϱ� �Լ� �����
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

// ��Ģ���� �Լ� �����
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

// ��� �Լ��� �̿��� ���丮��
int factorial(int a) {
	if (a == 1) return 1;
	else return a * factorial(a - 1);
}

int main(void) {
	int n;
	printf("n ���丮���� ����Ѵ�. ");
	scanf("%d", &n);
	printf("%d\n", factorial(n));
	system("pause");
	return 0;
}