#include <stdio.h>

void cube(double num);
void Temperatures(double df);

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
	//int num1, num2;

	//printf("请输入一个整数：");
	//scanf_s("%d", &num1);
	//num2 = num1 + 10;
	//while (num1 <= num2) {
	//	printf("%d ", num1);
	//	num1++;
	//}

//3.
	//const int W_PER_D = 7;
	//int day;

	//printf("请输入天数：");
	//scanf_s("%d", &day);
	//while (day > 0) {
	//	printf("%d天 = %d周%d天\n", day, day / W_PER_D, day % W_PER_D);
	//	printf("请输入天数：");
	//	scanf_s("%d", &day);
	//}
	//printf("输入的值不正确。");

//4.
	//const float IN_PER_FT = 12;
	//const float FT_PER_CM = 0.0328084;
	//float cm;

	//printf("请输入一个身高数（单位：厘米）：");
	//scanf_s("%f", &cm);
	//while (cm > 0) {
	//	int feet = cm * FT_PER_CM;
	//	float inch = (cm * FT_PER_CM - feet) * IN_PER_FT;

	//	printf("%0.1f = %d英尺%0.1f英寸\n", cm, feet, inch);
	//	printf("请输入一个身高数（单位：厘米）：");
	//	scanf_s("%f", &cm);
	//}
	//printf("请输入正确的身高数。");

//5.
//6.

//7.
	//double num, num3;

	//printf("请输入一个小数：");
	//scanf_s("%lf", &num);
	//cube(num);

//8.
	//int num8, num9;

	//printf("输入一个整数去求模其它数：");
	//scanf_s("%d", &num8);
	//printf("输入一个数求它的模：");
	//scanf_s("%d", &num9);
	//while (num9 > 0) {
	//	printf("%d %% %d = %d\n", num9, num8, num9 % num8);
	//	printf("输入一个数求它的模（输入小于等于0的数结束程序）：");
	//	scanf_s("%d", &num9);
	//}
	//printf("结束。");

//9.
	int status;
	double df;

	printf("输入一个华氏温度：");
	status = scanf_s("%lf", &df);
	while (status == 1) {
		Temperatures(df);
		printf("输入一个华氏温度（输入一个非数字退出程序）：");
		status = scanf_s("%lf", &df);
	}
	printf("结束！");

	return 0;
}

void cube(double num) {
	double num2;
	num2 = num * num * num;
	printf("%lf的立方值是%lf", num, num2);

	return 0;
}

void Temperatures(double df) {
	double dc, kt;

	dc = 5.0 / 9.0 * (df - 32.0);	//摄氏度
	kt = dc + 273.16;					//开氏温度
	printf("%.2lf华氏温度 = %.2lf摄氏度 = %.2lf开氏温度\n", df, dc, kt);

	return 0;
}