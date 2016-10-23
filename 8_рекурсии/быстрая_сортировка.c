#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>
#define n 15

void qs(int [], int, int);

int main()
{
	setlocale(LC_ALL, "RUS");

	int m[n], i;
	srand(time(NULL));
	for (i = 0; i < n; i++)
	{
		m[i] = rand() % 100 + 1;
		printf("%5d", m[i]);
	}
	printf("\n");
	qs(m,0,n-1);
	for (i = 0; i < n; i++)
	{
		printf("%5d", m[i]);
	}
	printf("\n");
	getchar();
}

void qs(int m[], int nach, int con)
{
	int temp, i = nach, j = con, sr = m[(nach+con)/2];
	if (nach >= con) return;
	else
	{
		while (i<=j)
		{
			while (m[i] < sr) { i++; }
			while (m[j] > sr) { j--; }
			if (i <= j)
			{
				temp = m[i];
				m[i] = m[j];
				m[j] = temp;
				i++;
				j--;
			}
		}
		qs(m,nach,j);
		qs(m,i,con);
	}
}
