#include <stdio.h>

int main(void) {
//1.
	//const int M_PER_H = 60;
	//int min;

	//printf("请输入一个分钟数(整数)：____\b\b\b\b");
	//scanf_s("%d", &min);
	//while (min > 0) {
	//	printf("%d分钟 = %d小时%d分钟\n", min, min / M_PER_H, min % M_PER_H);
	//	printf("请输入一个分钟数(整数)：____\b\b\b\b");
	//	scanf_s("%d", &min);
	//}

//2.
	int num1, num2;

	printf("请输入一个整数：");
	scanf_s("%d", &num1);
	num2 = num1 + 10;
	while (num1 <= num2) {
		printf("%d ", num1);
		num1++;
	}

//3.


	return 0;
}