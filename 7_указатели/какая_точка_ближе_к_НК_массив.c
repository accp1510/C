#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>
#define size 9

typedef struct 
{
int x;
int y;
} TPoint;

TPoint m[size], a={0,0}, b={10,10};

float Sr (TPoint *, TPoint *);
float minS (TPoint [], int);
void MinRas (TPoint [], int *, TPoint *);

void main() 
{
	setlocale(LC_ALL, "RUS");
		
		int i, sz=size; float s, ms;
		srand(time(NULL));
			for(i=0;i<size;i++)																		//вводим структурный массив
			{
				m[i].x=rand()%10+1;
				m[i].y=rand()%10+1;
			}
			for(i=0;i<size;i++)																		//выводим структурный массив
			{
				printf("координатa %d => %2d %2d \n",i+1,m[i].x,m[i].y);
			}
			
			s=Sr(&a,&b);																			//проверем функцию подсчета расстояния
			printf("расстояние между контрольными точками %.2f \n",s);
			ms=minS(m,size);																		//проверем функцию подсчета минимального расстояния
			printf("минимальное расстояние %.2f \n",ms);
			MinRas(m,&sz,&a);																		//проверяем самую важную функцию	
	getchar();
}

float Sr (TPoint *a, TPoint *b)																		//функция подсчета расстояния
{
	float s;
		s=sqrt(pow(b->x-a->x,2)+pow(b->y-a->y,2));
		return s;	
}

float minS (TPoint m[], int n)																		//функция наименьшего расстояния
{
	float s, min; int i;
		min=Sr(&m[0],&a);																			//возможно стоит поменять местами, но из-за квадрата не будем
		for(i=1;i<n;i++)
		{
			s=Sr(&m[i],&a);
			if(min>s) min=s;
		}
		return min;	
}

void MinRas (TPoint m[], int *n, TPoint *a)															//функция соединяющая в себе 2 вышестоящие
{
	int i, k=0; float rs, minr;
		minr=sqrt(pow(m[0].x-a->x,2)+pow(m[0].y-a->y,2));
		for(i=0;i<*n;i++)
		{
			rs=sqrt(pow(m[i].x-a->x,2)+pow(m[i].y-a->y,2));
			printf("расстояние до координаты %2d => %.2f \n",i+1,rs);
			if(minr>rs) {minr=rs; k=i;}
		}
		printf("минимальное расстояние %.2f - это расстояние до точки %d \n",minr,k+1);
}
