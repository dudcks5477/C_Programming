#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1���� 100������ ���� ����ϱ�
/*
int main(void) {
    for (int i = 0; i <= 100; i++) {
        printf("%d\n", i);
    }
    system("pause");
    return 0;
}
*/

// 1���� N������ �� ����ϱ�
/*
int main(void) {
    int n, sum = 0;
    printf("n�� �Է��ϼ���. ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("%d\n", sum);
    system("pause");
    return 0;
}
*/

// ���� ���� ���� 1
/*
int main(void) {
    for (;;) {
        // ���ǹ��� ������ ������ �׻� ��(True)
        printf("Hello World!\n");
    }
    system("pause");
    return 0;
}
*/

// ���� ���� ���� 2
/*
int main(void) {
    for (int i = 0; i <= 100; i--) {
        printf("Hello World");
    }
    system("pause");
    return 0;
}
*/

// -1�� �Էµ� ������ ���ϱ�
/*
int main(void) {
    int sum = 0;
    for (; 1;) {
        int x;
        scanf("%d", &x);
        if (x == -1) break;
        sum += x;
    }
    printf("%d\n", sum);
    system("pause");
    return 0;
}
*/

// Ư�� ���ڸ� N�� ����ϱ�
/*
int main(void) {
    int n;
    char a;
    scanf("%d %c", &n, &a);
    while (n--) {
        printf("%c ", a);
    }
    system("pause");
    return 0;
}
*/

// Ư�� ������ ������ ����ϱ�
/*
int main(void) {
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i <= 9) {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
    system("pause");
    return 0;
}
*/

// ������ ����ϱ� (WHILE��)
/*
int main(void) {
    int i = 1;
    while (i <= 9) {
        int j = 1;
        while (j <= 9) {
            printf("%d * %d = %d\n", i, j, i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    system("pause");
    return 0;
}
*/

// ������ ����ϱ� (FOR��)
int main(void) {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}