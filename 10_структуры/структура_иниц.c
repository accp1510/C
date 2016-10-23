#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>

struct std
{
	char name[30];
	char fname[50];
	int year;
	int ball[5];
	float srball;
};

struct std a;


int main()
{
	setlocale(LC_ALL, "RUS");
	
	int i;
	a.srball=0;
	printf("введите имя \n");
	scanf("%s",a.name);
	printf("введите фамилию \n");
	scanf("%s",a.fname);
	printf("введите полных лет \n");
	scanf("%d",&a.year);
	printf("введите баллы \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a.ball[i]);
	}
	for(i=0;i<5;i++)
	{
		a.srball=a.srball+a.ball[i];
	}
	a.srball=a.srball/5;
	printf("Имя %s \n",a.name);
	printf("Фамилия %s \n",a.fname);
	printf("Полных лет %d \n",a.year);
	printf("Средний балл %.2f \n",a.srball);
	for(i=0;i<5;i++)
	{
		printf("%3d",a.ball[i]);
	}
	
	getchar();
}
