#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	int k = 300, i=0;
	float g = 0.0;
	while (k>=100)
	{
		g = (float) k / 10;
		k = (int) k - g - 5;
		i++;
		printf("%5d %5.0f \n", k, g);
	}
	printf("%2d \n",i);
	
	getchar();
}