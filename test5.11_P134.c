#include <stdio.h>

void cube(double num);
void Temperatures(double df);

int main(void) {
//1.
	//const int M_PER_H = 60;
	//int min;

	//printf("������һ��������(����)��____\b\b\b\b");
	//scanf_s("%d", &min);
	//while (min > 0) {
	//	printf("%d���� = %dСʱ%d����\n", min, min / M_PER_H, min % M_PER_H);
	//	printf("������һ��������(����)��____\b\b\b\b");
	//	scanf_s("%d", &min);
	//}

//2.
	//int num1, num2;

	//printf("������һ��������");
	//scanf_s("%d", &num1);
	//num2 = num1 + 10;
	//while (num1 <= num2) {
	//	printf("%d ", num1);
	//	num1++;
	//}

//3.
	//const int W_PER_D = 7;
	//int day;

	//printf("������������");
	//scanf_s("%d", &day);
	//while (day > 0) {
	//	printf("%d�� = %d��%d��\n", day, day / W_PER_D, day % W_PER_D);
	//	printf("������������");
	//	scanf_s("%d", &day);
	//}
	//printf("�����ֵ����ȷ��");

//4.
	//const float IN_PER_FT = 12;
	//const float FT_PER_CM = 0.0328084;
	//float cm;

	//printf("������һ�����������λ�����ף���");
	//scanf_s("%f", &cm);
	//while (cm > 0) {
	//	int feet = cm * FT_PER_CM;
	//	float inch = (cm * FT_PER_CM - feet) * IN_PER_FT;

	//	printf("%0.1f = %dӢ��%0.1fӢ��\n", cm, feet, inch);
	//	printf("������һ�����������λ�����ף���");
	//	scanf_s("%f", &cm);
	//}
	//printf("��������ȷ���������");

//5.
//6.

//7.
	//double num, num3;

	//printf("������һ��С����");
	//scanf_s("%lf", &num);
	//cube(num);

//8.
	//int num8, num9;

	//printf("����һ������ȥ��ģ��������");
	//scanf_s("%d", &num8);
	//printf("����һ����������ģ��");
	//scanf_s("%d", &num9);
	//while (num9 > 0) {
	//	printf("%d %% %d = %d\n", num9, num8, num9 % num8);
	//	printf("����һ����������ģ������С�ڵ���0�����������򣩣�");
	//	scanf_s("%d", &num9);
	//}
	//printf("������");

//9.
	int status;
	double df;

	printf("����һ�������¶ȣ�");
	status = scanf_s("%lf", &df);
	while (status == 1) {
		Temperatures(df);
		printf("����һ�������¶ȣ�����һ���������˳����򣩣�");
		status = scanf_s("%lf", &df);
	}
	printf("������");

	return 0;
}

void cube(double num) {
	double num2;
	num2 = num * num * num;
	printf("%lf������ֵ��%lf", num, num2);

	return 0;
}

void Temperatures(double df) {
	double dc, kt;

	dc = 5.0 / 9.0 * (df - 32.0);	//���϶�
	kt = dc + 273.16;					//�����¶�
	printf("%.2lf�����¶� = %.2lf���϶� = %.2lf�����¶�\n", df, dc, kt);

	return 0;
}