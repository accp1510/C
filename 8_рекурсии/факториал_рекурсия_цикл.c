#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>

unsigned long factC(int);
unsigned long fact(int);

int main()
{
	setlocale(LC_ALL, "RUS");

		int n; unsigned long fc, fc1;
		scanf("%d", &n);
		fc = factC(n);
		printf("фактриал %ld \n", fc);
		fc1 = fact(n);
		printf("фактриал %ld \n", fc1);

	getchar();
}

unsigned long factC(int a)
{
		int i; unsigned long fc=1;
		if ((a == 0) || (a == 1)) return 1;
		else
		{
			for (i = 2; i <= a; i++)
			{
				fc = fc*i;
			}
		}
		return fc;
}

unsigned long fact(int a)
{	
	unsigned long fc;
	if ((a == 0) || (a == 1)) return 1;
	else fc = fact(a - 1)*a;
	return fc;
}	
