#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// IF��
/*
int main(void) {
    printf("�մ��� ��� �Գ���?");
    int a;
    scanf("%d", &a);
    if (a == 1 || a == 2) {
        printf("2�μ����� �ȳ��մϴ�.\n");
    }
    else if (a == 3 || a == 4) {
        printf("4�μ����� �ȳ��մϴ�.\n");
    }
    else {
        printf("���������� �ȳ��մϴ�.\n");
    }
    system("pause");
    return 0;
}
*/
/*
int main(void) {
    int size;
    printf("���� �޸� ũ�⸦ �Է��ϼ���. (GB) ");
    scanf("%d", &size);
    if (size >= 16) {
        printf("���� �޸� ũ�Ⱑ ����մϴ�.\n");
    }
    else {
        printf("���� �޸𸮸� �����ϼ���.\n");
    }
    system("pause");
    return 0;
}
*/

// ���ǹ�
/*
int main(void) {
    printf("������ �Է��ϼ���. ");
    char a;
    scanf("%c", &a);
    switch (a) {
    case 'A' :
        printf("A �����Դϴ�.\n");
        break;
    case 'B' :
        printf("B �����Դϴ�.\n");
        break;
    case 'C' :
        printf("C �����Դϴ�.\n");
        break;
    default:
        printf("������ �ٸ��� �Է��ϼ���.\n");
    }
    system("pause");
    return 0;
}
*/

int main(void) {
    printf("���� �Է��ϼ���. ");
    int a;
    scanf("%d", &a);
    switch (a) {
    case 1:
    case 2:
    case 3:
        printf("��\n");
        break;
    case 4:
    case 5:
    case 6:
        printf("����\n");
        break;
    case 7:
    case 8:
    case 9:
        printf("����\n");
        break;
    case 10:
    case 11:
    case 12:
        printf("�ܿ�\n");
        break;
    }
    system("pause");
    return 0;
}