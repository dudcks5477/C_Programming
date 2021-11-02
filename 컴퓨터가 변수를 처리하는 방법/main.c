#include <stdio.h>

// 전역변수
/*
int a = 5;

void changeValue() {
	a = 10;
}

int main(void) {
	printf("%d\n", a);
	changeValue();
	printf("%d\n", a);
	system("pause");
	return 0;
}
*/

// 지역변수
/*
int main(void) {
	int a = 7;
	if (1) {
		int a = 5;
	}
	printf("%d", a);
	system("pause");
	return 0;
}
*/

// 정적변수
/*
void process() {
	static int a = 5;
	a = a + 1;
	printf("%d\n", a);
}

int main(void) {
	process();
	process();
	process();
	system("pause");
	return 0;
}
*/

// 레지스터 변수
/*
int main(void) {
	register int a = 10, i;
	for (i = 0; i < a; i++) {
		printf("%d ", i);
	}
	system("pause");
	return 0;
}
*/

// 값에 의한 전달 방식(ADD 함수)
/*
void add(int a, int b) {
	a = a + b;
}

int main(void) {
	int a = 7;
	add(a, 10);
	printf("%d\n", a);
	system("pause");
	return 0;
}
*/

// 참조에 의한 전달 방식(ADD 함수)
void add(int* a) {
	*a = (*a) + 10;
}

int main(void) {
	int a = 7;
	add(&a);
	printf("%d\n", a);
	system("pause");
	return 0;
}