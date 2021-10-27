#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

// 다음과 같은 문법으로 배열을 초기화하고 개별적인 값에 접근할 수 있다.
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

// 배열의 원소 중에서 최댓값 찾기
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

// 문자열과 배열
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

// 문자열에 포함된 'l'개수 출력하기
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