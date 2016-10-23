#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>

typedef struct {int x; int y} Tp;
Tp a,b;

void swap(Tp *, Tp *);
float S (Tp *, Tp *);

int main()
{
	setlocale(LC_ALL, "RUS");
	
	float s;
	printf("введите X первой точки \n");
	scanf("%d",&a.x);
	printf("введите Y первой точки \n");
	scanf("%d",&a.y);
	printf("введите X второй точки \n");
	scanf("%d",&b.x);
	printf("введите Y второй точки \n");
	scanf("%d",&b.y);
	printf("координаты первой точки %2d %2d \n",a.x,a.y);
	printf("координаты второй точки %2d %2d \n",b.x,b.y);
	s=S(&a,&b);
	swap(&a,&b);
	printf("координаты первой точки %2d %2d \n",a.x,a.y);
	printf("координаты второй точки %2d %2d \n",b.x,b.y);
	printf("расстояние между 2 точками %.2f \n",s);	
	
	getchar();
}

void swap(Tp *p1, Tp *p2)
{
	int temp;
	temp=p1->x;
	p1->x=p2->x;
	p2->x=temp;
	temp=p1->y;
	p1->y=p2->y;
	p2->y=temp;	
}

float S (Tp *p1, Tp *p2)
{
	float s;
	s=sqrt((p2->x-p1->x)*(p2->x-p1->x)+(p2->y-p1->y)*(p2->y-p1->y));
	return s;	
}
