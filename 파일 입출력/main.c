#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ������ �л� ���� �ý��� �����
typedef struct {
	char name[20];
	int score;
} Student;

// ���Ͼ� ���� ���ڿ� ����
/*
int main(void) {
	char s[20] = "Hello World";
	FILE* fp;
	fp = fopen("temp.txt", "w");
	fprintf(fp, "%s\n", s);
	fclose(fp);
	return 0;
}
*/

// ������ �л� ���� �ý��� �����
int main(void) {
	int n, sum = 0;
	FILE* fp;
	fp = fopen("input.txt", "r");
	fscanf(fp, "%d", &n);
	Student* students = (Student*)malloc(sizeof(Student) * n);
	for (int i = 0; i < n; i++) {
		fscanf(fp, "%s %d", &((students + i)->name), &((students + i)->score));
		// printf("�̸�: %s, ����: %d\n", (students + i)->name, (students + i)->score);
	}
	for (int i = 0; i < n; i++) {
		sum += (students + i)->score;
	}
	free(students);
	fclose(fp);
	printf("���� ���: %.2f\n", (double) sum / n);
	system("pause");
	return 0;
}
