#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

// ������ ���� �������� �迭�� �ʱ�ȭ�ϰ� �������� ���� ������ �� �ִ�.
/*
int main(void) {
    // int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
    int a[10] = { 0, };
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    system("pause");
    return 0;
}
*/

// �迭�� ���� �߿��� �ִ� ã��
/*
int main(void) {
    int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
    int i, maxValue = INT_MIN;
    for (i = 0; i < 10; i++) {
        if (maxValue < a[i]) maxValue = a[i];
    }
    printf("%d\n", maxValue);
    system("pause");
    return 0;
}
*/

// ���ڿ��� �迭
/*
int main(void) {
    char a[20];
    scanf("%s", &a);
    printf("%s\n", a);
    system("pause");
    return 0;
}
*/

/*
int main(void) {
    char a[20] = "Hello World";
    a[4] = ', ';
    printf("%s\n", a);
    system("pause");
    return 0;
}
*/

// ���ڿ��� ���Ե� 'l'���� ����ϱ�
int main(void) {
    char a[] = "Hello World";
    int count = 0;
    for (int i = 0; i <= 10; i++) {
        if (a[i] == 'l') count++;
    }
    printf("%d\n", count);
    system("pause");
    return 0;
}