#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>
#define size 5

typedef struct
{
	char name[30];
	char fname[50];
	int ball[5];
}STud;

STud a[size];

void main()
{
	setlocale(LC_ALL, "RUS");
	FILE *file;
	file=fopen("Структура_Студенты.txt","w");
	
	int i, j;	
	srand(time(NULL));
			for (i=0;i<size;i++)															//Вводим структуру
			{
				printf("введите имя \n");
				scanf("%s",a[i].name);
				printf("введите фамилию \n");
				scanf("%s",a[i].fname);
					for(j=0;j<5;j++)
					{
						a[i].ball[j]=rand()%3+3;											//остаток от деления от 4 => 0,1,2,3
					}
			}
	
			for (i=0;i<size;i++)															//Записываем структуру в файл
			{	
				fprintf(file,"%s",a[i].name);
				fprintf(file," %s",a[i].fname);
					for(j=0;j<5;j++)
					{
						fprintf(file," %d",a[i].ball[j]);
					}
				fprintf(file," \n");
			}
			
			fclose(file);
			
	getchar();
}
