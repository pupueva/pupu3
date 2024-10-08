//3 лаба

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

	printf("введите целое число:");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("\n Сумма : %d \n Разность : %d \n Произведение : %d  ", num1 + num2, num1 - num2, num1 * num2);
	printf("\n Частное : %d \n Остаток : %d ", num1 / num2, num1 % num2);
	
	//2
	int dym;
	float result;
	float resulf;
	puts("\nВведите значение для расчёта:");
	scanf_s("%d", &dym);
	result =D*dym;
	resulf =I*dym;
	printf("%d дюймов - это %.1f см\n", dym, result);
	printf("%d испанского дюймов - это %.3f см\n", dym, resulf);
	//3
	int a;
	int b;

	printf("Введите число a:");
	scanf_s("%d", &a);
	printf("Введите число b:");
	scanf_s("%d", &b);

	printf("\n________________\n");
	printf("\n|%4s |%4s |%4s |\n","a*b","a+b","a-b");
	printf("\n---------------");
	printf("\n|%2.d*%1.d|%2.d+%1.d|%2.d-%1.d|", a, b, a, b, a, b);
	printf("\n_______________");
	printf("\n|%4.d |%4.d |%4.d|",a*b,a+b,a-b);


	//дз 17 вар
	int x;
	float pi = 3.14f, s, v;
	printf("\nвведите диаметр \n");
	scanf_s("%d", &x);
	s = pi * x * x;
	v = pi * x * x * x / 6;
	printf("Площадь поверхности %f \nОбъем %f", s, v);
	return 0;
}