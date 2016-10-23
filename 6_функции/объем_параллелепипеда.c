#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>

int vp(int, int, int);

int main()
{
	setlocale(LC_ALL, "RUS");

	int r, a, b, c;
	printf("Введите значения для вычисления объема пар-да \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	r=vp(a,b,c);
	printf("Результат %d \n",r);
	
	getchar();
}

int vp(int a, int b, int c)
{
	int s=0;
	s=a*b*c;
	return s;
}
