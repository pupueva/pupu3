#include <stdio.h>
#include <locale.h>
#define D 2.54
#define I 2.32166
void main()
{
	//3.1
	setlocale(LC_CTYPE, "RUS");
	int num1;
	int num2;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("������� �����:num1,num2");
	printf("\n ����� : %d \n �������� : %d \n ������������ : %d  ", num1 + num2, num1 - num2, num1 * num2);
	printf("\n ������� : %d \n ������� : %d ", num1 / num2, num1 % num2);
	return 0;
	//3.2
	int dym;
	float result;
	float resulf;
	puts("������� �������� ��� �������:");
	scanf_s("%d", &dym);
	result =D*dym;
	resulf =I*dym;
	printf("%d ������ - ��� %.1f ��\n", dym, result);
	printf("%d ���������� ������ - ��� %.3f ��\n", dym, resulf);
	//�� 17 ���
	int x;
	float pi = 3.14f, s, v;
	printf("������� ������� \n");
	scanf_s("%d", &x);
	s = pi * x * x;
	v = pi * x * x * x / 6;
	printf("������� ����������� %f \n����� %f", s, v);
	return 0;
}