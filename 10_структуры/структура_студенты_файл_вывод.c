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

STud a[size], f;

int HBall(STud *);

void main()
{
	setlocale(LC_ALL, "RUS");
	int j;
	FILE *file;
	file=fopen("Структура_Студенты.txt","r");
		
			while(!feof(file))
				{
					fscanf(file,"%s",f.name);
					fscanf(file,"%s",f.fname);
					for(j=0;j<5;j++)
					{
					fscanf(file,"%d",&f.ball[j]);
					}
					if(HBall(&f)==1) printf("Фамилия Отличника %s \n",f.fname);
				}
		
	fclose(file);		
	getchar();
}

int HBall(STud *p)																			//функция определяет наличие только положительных оценок
{
	int i, k=0;
	for(i=0;i<5;i++)
	{
		if (p->ball[i]<4) k++;
	}
	if (k==0) return 1;
	else return 0;
}
















