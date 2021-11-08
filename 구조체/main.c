#include <stdio.h>

// 구조체의 정의와 선언
/*
struct Student {
	char studentId[10];
	char name[10];
	int grade;
	char major[100];
};
*/
// 구조체의 변수의 선언과 접근
/*
int main(void) {
	struct Student s; // 구조체 변수 선언
	strcpy(s.studentId, "20183211"); // 구조체 변수에 접근
	strcpy(s.name, "찬쌤");
	s.grade = 3;
	strcpy(s.major, "컴퓨터교육과");
}
*/
// 학생 구조체를 만들어서 활용하기
/*
struct Student { // 학생 구조체 정의
	char studentId[10];
	char name[10];
	int grade;
	char major[100];
};

int main(void) {
	struct Student s; // 구조체 변수 선언
	strcpy(s.studentId, "20183211"); // 구조체 변수에 접근
	strcpy(s.name, "찬쌤");
	s.grade = 3;
	strcpy(s.major, "컴퓨터교육과");
	printf("학번: %s\n", s.studentId); // 구조체 내용 출력
	printf("이름: %s\n", s.name);
	printf("학년: %d\n", s.grade);
	printf("학과: %s\n", s.major);
	system("pause");
	return 0;
}
*/
/*
struct Student { // 학생 구조체 정의
	char studentId[10];
	char name[10];
	int grade;
	char major[100];
} s;

int main(void) {
	strcpy(s.studentId, "20183211"); // 구조체 변수에 접근
	strcpy(s.name, "찬쌤");
	s.grade = 3;
	strcpy(s.major, "컴퓨터교육과");
	printf("학번: %s\n", s.studentId); // 구조체 내용 출력
	printf("이름: %s\n", s.name);
	printf("학년: %d\n", s.grade);
	printf("학과: %s\n", s.major);
	system("pause");
	return 0;
}
*/

// 구조체의 초기화
/*
struct Student { // 학생 구조체 정의
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
};

int main(void) {
	struct Student s = { "20183211", "찬쌤", 3, "컴퓨터교육과" };
	printf("학번: %s\n", s.studentId); // 구조체 내용 출력
	printf("이름: %s\n", s.name);
	printf("학년: %d\n", s.grade);
	printf("전공: %s\n", s.major);
	system("pause");
	return 0;
}
*/
/*
struct Student { // 학생 구조체 정의, 선언 및 초기화
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
} s = { "20183211", "찬쌤", 3, "컴퓨터교육괴" };

int main(void) {
	printf("학번: %s\n", s.studentId); // 구조체 내용 출력
	printf("이름: %s\n", s.name);
	printf("학년: %d\n", s.grade);
	printf("전공: %s\n", s.major);
	system("pause");
	return 0;
}
*/

// 더 짧게 구조체 정의하기
/*
typedef struct Student { // 학생 구조체 정의
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
} Student;

int main(void) {
	Student s = { "20183211", "찬쌤", 3, "컴퓨터교육과" };
	printf("학번: %s\n", s.studentId); // 구조체 내용 출력
	printf("이름: %s\n", s.name);
	printf("학년: %d\n", s.grade);
	printf("전공: %s\n", s.major);
	system("pause");
	return 0;
}
*/
/*
typedef struct { // 학생 구조체 정의
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
} Student;

int main(void) {
	Student s = { "20183211", "찬쌤", 3, "컴퓨터교육과" };
	printf("학번: %s\n", s.studentId); // 구조체 내용 출력
	printf("이름: %s\n", s.name);
	printf("학년: %d\n", s.grade);
	printf("전공: %s\n", s.major);
	system("pause");
	return 0;
}
*/

// 구조체 포인터 변수에 접근하기
typedef struct { // 학생 구조체 정의
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
} Student;

int main(void) {
	Student* s = malloc(sizeof(Student));
	strcpy(s->studentId, "20183211"); // 구조체 포인터 변수에 접근
	strcpy(s->name, "찬쌤");
	s->grade = 3;
	strcpy(s->major, "컴퓨터교육과");
	printf("학번: %s\n", s->studentId); // 구조체 내용 출력
	printf("이름: %s\n", s->name);
	printf("학년: %d\n", s->grade);
	printf("전공: %s\n", s->major);
	system("pause");
	return 0;
}