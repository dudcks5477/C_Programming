#include <stdio.h>

// �Լ� ������
/*
void function() {
	printf("It's my function.");
}

int main(void) {
	printf("%d\n", function);
	system("pause");
	return 0;
}
*/

// �Ű����� �� ��ȯ �ڷ����� ���� �Լ� ������
/*
void myFunction() {
	printf("It's my function. \n");
}

void yourFunction() {
	printf("It's your function. \n");
}

int main(void) {
	void(*fp)() = myFunction;
	fp();
	fp = yourFunction;
	fp();
	system("pause");
	return 0;
}
*/

// �Ű����� �� ��ȯ �ڷ����� �ִ� �Լ� ������
/*
int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int main(void) {
	int(*fp)(int, int) = add;
	printf("%d\n", fp(10, 3));
	fp = sub;
	printf("%d\n", fp(10, 3));
	system("pause");
	return 0;
}
*/

// �Լ� �����͸� ��ȯ�Ͽ� ����ϱ�
int add(int a, int b) {
	return a + b;
}

int(*process(char* a))(int, int) {
	printf("%s\n", a);
	return add;
}

int main(void) {
	printf("%d\n", process("98�� 03�� ���غ��ڽ��ϴ�.")(98, 3));
	system("pause");
	return 0;
}