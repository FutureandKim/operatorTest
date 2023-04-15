#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void testOperator(unsigned int x, unsigned int y) {
	printf("x = %0.8x, ", x); //8�ڸ� 16���� ���
	for (int i = 31; i >= 0; i--) { //32�ڸ� binary
		printf("%d", (x >> i) & 1); //��Ʈ �����ڸ� Ȱ���Ͽ� ��Ʈ�� ������ ������ ��� �̵���Ű�� 32�ڸ� ��µǵ��� ����
	}
	printf("\n");
	printf("y = %0.8x, ", y); //8�ڸ� 16���� ���
	for (int i = 31; i >= 0; i--) { //32�ڸ� binary
		printf("%d", (y >> i) & 1);
	}
	//�������� �� ���(hexa��, binary�� ������)
	printf("\n\nbitwise ��������\n");
	printf("x & y = %0.8x, ", x & y);
	for (int i = 31; i >= 0; i--) {
		printf("%d", ((x & y) >> i) & 1); //��Ʈ �����ڸ� Ȱ���Ͽ� ��Ʈ�� ������ ������ ��� �̵���Ű�� 32�ڸ� ��µǵ��� ����(�Ʒ� �����Ǵ� �ĵ� �� ���� ���� ����, �ּ� ����)
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
	//shift������ �� ���(hexa��, binary�� ������)
	printf("\n\nshift ������\n");
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
	for (int i = 0; i < 5; i++) { //���� ����
		unsigned int x = rand();
		unsigned int y = rand();
		testOperator(x, y);
	}
	return 0;
}

