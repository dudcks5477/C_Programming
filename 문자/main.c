#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ƽ�Ű �ڵ�
/*
int main(void) {
	char a = 65;
	printf("%c\n", a);
	system("pause");
	return 0;
}
*/

// ���� ����� �Լ�
/*
int main(void) {
	char a = getchar();
	printf("%c\n", a);
	system("pause");
	return 0;
}
*/

// �Է� ���۷� ���� ���� �߻��ϴ� ����
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

// ���� �ִ� �Է� ���۸� �׻� ���� �� �ִ�.
int main(void) {
	int a; char c;
	scanf("%d", &a);
	printf("%d\n", a);
	int temp;
	// �� �ھ� �޾Ƽ� ������ ���̰ų� ���� ���ڸ� ������ �Է��� ���߹Ƿ� �׻� �Է� ���۸� ����.
	while ((temp = getchar()) != EOF && temp != '\n') { }
	scanf("%c", &c);
	printf("%c\n", c);
	system("pause");
	return 0;
} 