#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>

float cf(int);

int main()
{
	setlocale(LC_ALL, "RUS");

	float r; int c;
	printf("Введите значения для перевода градусов С в градусы F \n");
	scanf("%d", &c);
	r=cf(c);
	printf("Результат %0.2f \n",r);
	
	getchar();
}

float cf(int c)
{
	float s=1.0;
	s=(float)c*9/5+32;
	return s;
}
