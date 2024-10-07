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
	printf("введите число:num1,num2");
	printf("\n Сумма : %d \n Разность : %d \n Произведение : %d  ", num1 + num2, num1 - num2, num1 * num2);
	printf("\n Частное : %d \n Остаток : %d ", num1 / num2, num1 % num2);
	return 0;
	//3.2
	int dym;
	float result;
	float resulf;
	puts("Введите значение для расчёта:");
	scanf_s("%d", &dym);
	result =D*dym;
	resulf =I*dym;
	printf("%d дюймов - это %.1f см\n", dym, result);
	printf("%d испанского дюймов - это %.3f см\n", dym, resulf);
	//дз 17 вар
	int x;
	float pi = 3.14f, s, v;
	printf("введите диаметр \n");
	scanf_s("%d", &x);
	s = pi * x * x;
	v = pi * x * x * x / 6;
	printf("Площадь поверхности %f \nОбъем %f", s, v);
	return 0;
}