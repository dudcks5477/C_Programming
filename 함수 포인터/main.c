#include <stdio.h>

// 함수 포인터
/*
void function() {
	printf("It's my function.");
}

int main(void) {
	printf("%d\n", function);
	system("pause");
	return 0;
}
*/

// 매개변수 및 반환 자료형이 없는 함수 포인터
/*
void myFunction() {
	printf("It's my function. \n");
}

void yourFunction() {
	printf("It's your function. \n");
}

int main(void) {
	void(*fp)() = myFunction;
	fp();
	fp = yourFunction;
	fp();
	system("pause");
	return 0;
}
*/

// 매개변수 및 반환 자료형이 있는 함수 포인터
/*
int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int main(void) {
	int(*fp)(int, int) = add;
	printf("%d\n", fp(10, 3));
	fp = sub;
	printf("%d\n", fp(10, 3));
	system("pause");
	return 0;
}
*/

// 함수 포인터를 반환하여 사용하기
int add(int a, int b) {
	return a + b;
}

int(*process(char* a))(int, int) {
	printf("%s\n", a);
	return add;
}

int main(void) {
	printf("%d\n", process("98과 03을 더해보겠습니다.")(98, 3));
	system("pause");
	return 0;
}