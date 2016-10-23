#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>

int st(int, int);

int main()
{
	setlocale(LC_ALL, "RUS");

	int r, x, n;
	printf("¬ведите значени¤ дл¤ вычислени¤ x^n \n");
	scanf("%d", &x);
	scanf("%d", &n);
	r=st(x,n);
	printf("–езультат %d \n",r);
	
	getchar();
}

int st(int x, int n)
{
	int s=1, i;
	for(i=0;i<n;i++)
	{
		s=s*x;
	}
	return s;
}
