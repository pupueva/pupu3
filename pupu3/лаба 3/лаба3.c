//3 ����

#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//2
#define D 2.54
#define I 2.32166
void main()

{
	
	//1
	setlocale(LC_CTYPE, "RUS");
	int num1;
	int num2;

	printf("������� ����� �����:");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("\n ����� : %d \n �������� : %d \n ������������ : %d  ", num1 + num2, num1 - num2, num1 * num2);
	printf("\n ������� : %d \n ������� : %d ", num1 / num2, num1 % num2);
	
	//2
	int dym;
	float result;
	float resulf;
	puts("\n������� �������� ��� �������:");
	scanf_s("%d", &dym);
	result =D*dym;
	resulf =I*dym;
	printf("%d ������ - ��� %.1f ��\n", dym, result);
	printf("%d ���������� ������ - ��� %.3f ��\n", dym, resulf);
	//3
	int a;
	int b;

	printf("������� ����� a:");
	scanf_s("%d", &a);
	printf("������� ����� b:");
	scanf_s("%d", &b);

	printf("\n________________\n");
	printf("\n|%4s |%4s |%4s |\n","a*b","a+b","a-b");
	printf("\n---------------");
	printf("\n|%2.d*%1.d|%2.d+%1.d|%2.d-%1.d|", a, b, a, b, a, b);
	printf("\n_______________");
	printf("\n|%4.d |%4.d |%4.d|",a*b,a+b,a-b);


	//�� 17 ���
	int x;
	float pi = 3.14f, s, v;
	printf("\n������� ������� \n");
	scanf_s("%d", &x);
	s = pi * x * x;
	v = pi * x * x * x / 6;
	printf("������� ����������� %f \n����� %f", s, v);
	return 0;
}