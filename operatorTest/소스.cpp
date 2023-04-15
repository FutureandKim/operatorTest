#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void testOperator(unsigned int x, unsigned int y) {
	printf("x = %0.8x, ", x); //8자리 16진수 출력
	for (int i = 31; i >= 0; i--) { //32자리 binary
		printf("%d", (x >> i) & 1); //비트 연산자를 활용하여 비트를 오른쪽 끝으로 계속 이동시키며 32자리 출력되도록 설정
	}
	printf("\n");
	printf("y = %0.8x, ", y); //8자리 16진수 출력
	for (int i = 31; i >= 0; i--) { //32자리 binary
		printf("%d", (y >> i) & 1);
	}
	//논리연산자 값 출력(hexa값, binary값 순서로)
	printf("\n\nbitwise 논리연산자\n");
	printf("x & y = %0.8x, ", x & y);
	for (int i = 31; i >= 0; i--) {
		printf("%d", ((x & y) >> i) & 1); //비트 연산자를 활용하여 비트를 오른쪽 끝으로 계속 이동시키며 32자리 출력되도록 설정(아래 서술되는 식도 다 같은 원리 적용, 주석 생략)
	}
	printf("\n");
	printf("x | y = %0.8x, ", x | y);
	for (int i = 31; i >= 0; i--) {
		printf("%d", ((x | y) >> i) & 1);
	}
	printf("\n");
	printf("x ^ y = %0.8x, ", x ^ y);
	for (int i = 31; i >= 0; i--) {
		printf("%d", ((x ^ y) >> i) & 1);
	}
	printf("\n");
	printf("~x = %0.8x, ", ~x);
	for (int i = 31; i >= 0; i--) {
		printf("%d", (~x >> i) & 1);
	}
	printf("\n");
	printf("~y = %0.8x, ", ~y);
	for (int i = 31; i >= 0; i--) {
		printf("%d", (~y >> i) & 1);
	}
	//shift연산자 값 출력(hexa값, binary값 순서로)
	printf("\n\nshift 연산자\n");
	printf("x >> 4 = %0.8x, ", x >> 4);
	for (int i = 31; i >= 0; i--) {
		printf("%d", ((x >> 4) >> i) & 1);
	}
	printf("\n");
	printf("x << 4 = %08X, ", x << 4);
	for (int i = 31; i >= 0; i--) {
		printf("%d", ((x << 4) >> i) & 1);
	}
	printf("\n");
	printf("y >> 4 = %0.8x, ", x >> 4);
	for (int i = 31; i >= 0; i--) {
		printf("%d", ((y >> 4) >> i) & 1);
	}
	printf("\n");
	printf("y << 4 = %0.8x, ", x >> 4);
	for (int i = 31; i >= 0; i--) {
		printf("%d", ((y << 4) >> i) & 1);
	}
	printf("\n----------------------------------------------------------\n");
}
int main(void) {
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5; i++) { //난수 생성
		unsigned int x = rand();
		unsigned int y = rand();
		testOperator(x, y);
	}
	return 0;
}

