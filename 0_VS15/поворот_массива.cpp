#define _CRT_SECURE_NO_WARNINGS			// чтобы ошибок не было из-за стандарта СИ
#include <locale.h>						// библиотека с локалями  
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define	size 15

int main()								// int обязательно перед майн
{
	setlocale(LC_ALL, "RUS");			// включаем русскую локаль

	srand(time(NULL));
	int m[size], i, temp;
	for (i=0; i<size; i++)
	{
		m[i]=rand()%100+1;
	}
	for (i = 0; i<size; i++)
	{
		printf("%5d", m[i]);
	}
	printf("\n");
	for (i = 0; i<size/2; i++)
	{
		temp=m[i];
		m[i] = m[size-1-i];
		m[size-1-i] = temp;

	}
	for (i = 0; i<size; i++)
	{
		printf("%5d", m[i]);
	}

	printf("\n");
	getchar();
}