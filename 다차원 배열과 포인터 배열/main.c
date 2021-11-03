#include <stdio.h>

// 2차원 배열의 사용
/*
int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

int main(void) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
*/

// 3차원 배열 다루기
/*
int a[2][3][3] = { { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } },
                    { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } } };

int main(void) {
    int i, j, k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
*/

// 포인터 배열의 구조 분석
/*
int main(void) {
    int a = 10;
    int b[10];
    b = &a;
    system("pause");
    return 0;
}
*/
/*
int main(void) {
    int a[5] = { 1, 2, 3, 4, 5 };
    int* b = a;
    printf("%d\n", b[2]);
    system("pause");
    return 0;
}
*/
/*
int main(void) {
    int a[5] = { 1, 2, 3, 4, 5 };
    int* b = &a[0];
    printf("%d\n", b[2]);
    system("pause");
    return 0;
}
*/
/*
int main(void) {
    int a[5] = { 1, 2, 3, 4, 5 };
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", a + i);
    }
    system("pause");
    return 0;
}
*/
/*
int main(void) {
    double b[10];
    printf("%d %d\n", b, b + 9);
    system("pause");
    return 0;
}
*/
/*
int main(void) {
    int a[5] = { 1, 2, 3, 4, 5 };
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", *(a + i));
    }
    system("pause");
    return 0;
}
*/
/*
int main(void) {
    int a[5] = { 1, 2, 3, 4, 5 };
    int* p = a;
    printf("%d\n", *(p++));
    printf("%d\n", *(++p));
    printf("%d\n", *(p + 2));
    system("pause");
    return 0;
}
*/
int main(void) {
    int a[2][5] = { { 1, 2, 3, 4, 5 },
                    {6, 7, 8, 9, 10 } };
    int(*p)[5] = a[1];
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", p[0][i]);
    }
    system("pause");
    return 0;
}
