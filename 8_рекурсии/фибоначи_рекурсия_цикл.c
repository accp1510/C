#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>

unsigned long fibC(int);
unsigned long fib(int);

int main()
{
	setlocale(LC_ALL, "RUS");

	while (true)
	{



		int n; unsigned long fbc, fb;
		scanf("%d", &n);
		fbc = fibC(n);
		printf("фибоначи цикл %ld \n", fbc);
		fb = fib(n);
		printf("фибоначи рекурсия %ld \n", fb);

	}
	getchar();
}

unsigned long fibC(int a)
{
		int i, pd=1, pp=1; unsigned long fbc=1;
		if ((a == 0) || (a == 1)) return 1;
		else
		{
			for (i = 2; i <= a; i++)
			{
				fbc = pd+pp;		//сумма
				pp = pd;			//обмен последущее в предыдущее
				pd = fbc;			//в последущее сумму

			}
		}
		return fbc;
}

unsigned long fib(int a)
{	
	unsigned long fb;
	if ((a == 0) || (a == 1)) return 1;
	else fb = fib(a - 1)+fib(a - 2);
	return fb;
}	
