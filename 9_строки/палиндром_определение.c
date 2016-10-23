#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	char str[100], a, t=' '; int i = 0, j=0, k=0;
	printf("Введите строку \n");
	a = getchar();
	while (a != '\n')
	{
		str[i] = a;
		i++;
		a = getchar();
	}
	str[i] = '\0';

	while (j<i)
	{
		if (str[j] == str[i - 1])
		{
			i--;
			j++;
		}
		else
		{
			printf("Не Палиндром \n");
			k++;
			break;
		}
	}
	if(k==0) printf("Палиндром \n");
	
	getchar();
}
