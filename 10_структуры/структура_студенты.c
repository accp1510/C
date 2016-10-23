#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>
#define size 3

typedef struct
{
	char name[30];
	char fname[50];
	int ball[5];
}STud;

STud a[size], b={"Тучка","Малявка",{5,3,3,4,5}};

int StZach (STud [], int);
int HBall(STud *);
int StOtl (STud [], int);

void main()
{
	setlocale(LC_ALL, "RUS");
	
	int i, j, z, t, r;	
	srand(time(NULL));
			for (i=0;i<size;i++)															//Вводим структуру
			{
				printf("введите имя \n");
				scanf("%s",a[i].name);
				printf("введите фамилию \n");
				scanf("%s",a[i].fname);
					for(j=0;j<5;j++)
					{
						a[i].ball[j]=rand()%4+2;											//остаток от деления от 4 => 0,1,2,3
					}
			}
	
			for (i=0;i<size;i++)															//Выводим структуру
			{	
				printf("Имя %s \n",a[i].name);
				printf("Фамилия %s \n",a[i].fname);
					for(j=0;j<5;j++)
					{
						printf("%3d",a[i].ball[j]);
					}
				printf(" \n");
			}
			printf("Имя := %s Фамилия := %s   :::",b.name,b.fname);							//контроль
			for(j=0;j<5;j++)
			{
				printf("%3d",b.ball[j]);
			}
			printf(" \n");
			if(t=HBall(&b)>0) printf("Тучка СДАЛ \n"); else printf("Тучка НЕ сдал \n");		//функция положительных баллов
			z=StZach(a,size);																//общая функция
			printf("количество студентов сдавших зачет %2d \n",z);
			r=StOtl(a,size);																//функция студентов хорошистов
			printf("количество студентов сдавших зачет %2d \n",r);
		
			
	getchar();
	getchar();
}

int StZach (STud m[], int n)																//общая функция
{
	int i, j, k, s=0;
		for(i=0;i<n;i++)
		{
			k=0;
			for(j=0;j<5;j++)
			{
				if (a[i].ball[j]<=2) k++;
			}
			if(k==0) s++;
		}
	return s;
}

int HBall(STud *p)																			//функция определяет наличие только положительных оценок
{
	int i, k=0;
	for(i=0;i<5;i++)
	{
		if (p->ball[i]<=2) k++;
	}
	if (k==0) return 1;
	else return 0;
}

int StOtl (STud m[], int n)																	//функция считает хорошистов
{
	int i, k, s=0;
	for(i=0;i<n;i++)
	{
		k=HBall(&m[i]);
		s=s+k;
	}
	return s;
}


















