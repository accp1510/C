#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>

typedef struct {int x; int y;} Tp;
Tp m[7], b= {0,0}, a= {0,0};

float S (Tp *, Tp *);

int main() 
{
	setlocale(LC_ALL, "RUS");

	int i, k=0;
	float s, min;
	for(i=0;i<7;i++)
	{
		printf("введите X точки \n");
		scanf("%d",&m[i].x);
		printf("введите Y точки \n");
		scanf("%d",&m[i].y);	
	}
	
	b.x=m[0].x;
	b.y=m[0].y;
	min=S(&a,&b);

	for(i=0; i<7; i++) 
	{
		b.x=m[i].x;
		b.y=m[i].y;
		s=S(&a,&b);
		if(min>s) {min=s; k=i;}
		printf("длина %.2f \n",s);
	}

	printf("Ѕлиже всего к началу координат точка с координатами => %2d %2d еЄ номер => %2d \n",m[k].x,m[k].y,k+1);

	getchar();
}

float S (Tp *p1, Tp *p2) 
{
	float s;
	s=sqrt((p2->x-p1->x)*(p2->x-p1->x)+(p2->y-p1->y)*(p2->y-p1->y));
	return s;
}
