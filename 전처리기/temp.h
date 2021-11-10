/*
int add(int a, int b) {
	return a + b;
}
*/

// 조건부 컴파일
/*
#ifndef _TEMP_H_
#define _TEMP_H_
int add(int a, int b) {
	return a + b;
}
#endif
*/

// 파일 분할 컴파일
#ifndef _TEMP_H_
#define _TEMP_H_
int add(int a, int b);
#endif