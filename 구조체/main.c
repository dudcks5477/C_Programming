#include <stdio.h>

// ����ü�� ���ǿ� ����
/*
struct Student {
	char studentId[10];
	char name[10];
	int grade;
	char major[100];
};
*/
// ����ü�� ������ ����� ����
/*
int main(void) {
	struct Student s; // ����ü ���� ����
	strcpy(s.studentId, "20183211"); // ����ü ������ ����
	strcpy(s.name, "����");
	s.grade = 3;
	strcpy(s.major, "��ǻ�ͱ�����");
}
*/
// �л� ����ü�� ���� Ȱ���ϱ�
/*
struct Student { // �л� ����ü ����
	char studentId[10];
	char name[10];
	int grade;
	char major[100];
};

int main(void) {
	struct Student s; // ����ü ���� ����
	strcpy(s.studentId, "20183211"); // ����ü ������ ����
	strcpy(s.name, "����");
	s.grade = 3;
	strcpy(s.major, "��ǻ�ͱ�����");
	printf("�й�: %s\n", s.studentId); // ����ü ���� ���
	printf("�̸�: %s\n", s.name);
	printf("�г�: %d\n", s.grade);
	printf("�а�: %s\n", s.major);
	system("pause");
	return 0;
}
*/
/*
struct Student { // �л� ����ü ����
	char studentId[10];
	char name[10];
	int grade;
	char major[100];
} s;

int main(void) {
	strcpy(s.studentId, "20183211"); // ����ü ������ ����
	strcpy(s.name, "����");
	s.grade = 3;
	strcpy(s.major, "��ǻ�ͱ�����");
	printf("�й�: %s\n", s.studentId); // ����ü ���� ���
	printf("�̸�: %s\n", s.name);
	printf("�г�: %d\n", s.grade);
	printf("�а�: %s\n", s.major);
	system("pause");
	return 0;
}
*/

// ����ü�� �ʱ�ȭ
/*
struct Student { // �л� ����ü ����
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
};

int main(void) {
	struct Student s = { "20183211", "����", 3, "��ǻ�ͱ�����" };
	printf("�й�: %s\n", s.studentId); // ����ü ���� ���
	printf("�̸�: %s\n", s.name);
	printf("�г�: %d\n", s.grade);
	printf("����: %s\n", s.major);
	system("pause");
	return 0;
}
*/
/*
struct Student { // �л� ����ü ����, ���� �� �ʱ�ȭ
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
} s = { "20183211", "����", 3, "��ǻ�ͱ�����" };

int main(void) {
	printf("�й�: %s\n", s.studentId); // ����ü ���� ���
	printf("�̸�: %s\n", s.name);
	printf("�г�: %d\n", s.grade);
	printf("����: %s\n", s.major);
	system("pause");
	return 0;
}
*/

// �� ª�� ����ü �����ϱ�
/*
typedef struct Student { // �л� ����ü ����
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
} Student;

int main(void) {
	Student s = { "20183211", "����", 3, "��ǻ�ͱ�����" };
	printf("�й�: %s\n", s.studentId); // ����ü ���� ���
	printf("�̸�: %s\n", s.name);
	printf("�г�: %d\n", s.grade);
	printf("����: %s\n", s.major);
	system("pause");
	return 0;
}
*/
/*
typedef struct { // �л� ����ü ����
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
} Student;

int main(void) {
	Student s = { "20183211", "����", 3, "��ǻ�ͱ�����" };
	printf("�й�: %s\n", s.studentId); // ����ü ���� ���
	printf("�̸�: %s\n", s.name);
	printf("�г�: %d\n", s.grade);
	printf("����: %s\n", s.major);
	system("pause");
	return 0;
}
*/

// ����ü ������ ������ �����ϱ�
typedef struct { // �л� ����ü ����
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
} Student;

int main(void) {
	Student* s = malloc(sizeof(Student));
	strcpy(s->studentId, "20183211"); // ����ü ������ ������ ����
	strcpy(s->name, "����");
	s->grade = 3;
	strcpy(s->major, "��ǻ�ͱ�����");
	printf("�й�: %s\n", s->studentId); // ����ü ���� ���
	printf("�̸�: %s\n", s->name);
	printf("�г�: %d\n", s->grade);
	printf("����: %s\n", s->major);
	system("pause");
	return 0;
}