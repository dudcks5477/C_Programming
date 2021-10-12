#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1부터 100까지의 정수 출력하기
/*
int main(void) {
    for (int i = 0; i <= 100; i++) {
        printf("%d\n", i);
    }
    system("pause");
    return 0;
}
*/

// 1부터 N까지의 합 출력하기
/*
int main(void) {
    int n, sum = 0;
    printf("n을 입력하세요. ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("%d\n", sum);
    system("pause");
    return 0;
}
*/

// 무한 루프 예제 1
/*
int main(void) {
    for (;;) {
        // 조건문의 내용이 없으면 항상 참(True)
        printf("Hello World!\n");
    }
    system("pause");
    return 0;
}
*/

// 무한 루프 예제 2
/*
int main(void) {
    for (int i = 0; i <= 100; i--) {
        printf("Hello World");
    }
    system("pause");
    return 0;
}
*/

// -1이 입력될 때까지 더하기
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

// 특정 문자를 N번 출력하기
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

// 특정 숫자의 구구단 출력하기
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

// 구구단 출력하기 (WHILE문)
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

// 구구단 출력하기 (FOR문)
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