#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 간단한 학생 정보 시스템 만들기
typedef struct {
	char name[20];
	int score;
} Student;

// 파일얼 열어 문자열 쓰기
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

// 간단한 학생 정보 시스템 만들기
int main(void) {
	int n, sum = 0;
	FILE* fp;
	fp = fopen("input.txt", "r");
	fscanf(fp, "%d", &n);
	Student* students = (Student*)malloc(sizeof(Student) * n);
	for (int i = 0; i < n; i++) {
		fscanf(fp, "%s %d", &((students + i)->name), &((students + i)->score));
		// printf("이름: %s, 성적: %d\n", (students + i)->name, (students + i)->score);
	}
	for (int i = 0; i < n; i++) {
		sum += (students + i)->score;
	}
	free(students);
	fclose(fp);
	printf("점수 평균: %.2f\n", (double) sum / n);
	system("pause");
	return 0;
}
