#define _CRT_SECURE_NO_WARNINGS			// чтобы ошибок не было из-за стандарта СИ
#include <locale.h>						// библиотека с локалями  
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>

void RandArr(int[], int);
void PrArr(int[], int);
void MmArr(int[], int);
void ScArr(int[], int);




int main()								// int обязательно перед майн
{
	setlocale(LC_ALL, "RUS");			//включаем русскую локаль

	int *m, sw=0, n, w=0;
	printf("Введите размер массива \n");
	scanf("%d", &n);
	m = (int*)malloc(sizeof(int)*n);
	RandArr(m, n);
	while (w == 0)
	{
		printf("Что будем делать? \n Напечатать массив - введите: 1 \n Найти экстремумы массива - введите: 2 \n Проверить наличие числа в массиве - введите: 3 \n Для выхода - введите: -1 \n ");
		scanf("%d", &sw);
		switch (sw)
		{
		case 1: PrArr(m, n); 
			break;
		case 2: MmArr(m, n); 
			break;
		case 3: ScArr(m, n); 
			break;
		default: w = -1;
		}

	}

	free(m);
	getchar();
}

void RandArr(int rm[], int n)
{
	int i;
	srand(time(NULL));
	for (i = 0; i<n; i++)
	{
		*(rm + i) = rand() % 100 + 1;
	}
}

void PrArr(int rm[], int n)
{
	int i;
	srand(time(NULL));
	for (i = 0; i<n; i++)
	{
		printf("%5d", *(rm + i));
	}
	printf("\n");
}

void MmArr(int rm[], int n)
{
	int max, min, i;
	max = rm[0];
	min = rm[0];
	for (i = 0; i<n; i++)
	{
		if (*(rm + i)>max) max = *(rm + i);
		if (*(rm + i) < min) min = *(rm + i);
	}
	printf("MAX => %d \n", max);
	printf("MIN => %d \n", min);
}

void ScArr(int rm[], int n)
{
	int h, i, j = 0;
	printf("Введите Число для Проверки \n");
	scanf("%d", &h);
	for (i = 0; i<n; i++)
	{
		if (*(rm + i) == h) { printf("Есть такое число, его номер %d \n", i); j++; }
	}
	if (j == 0) printf("Нет таких чисел \n");
}
