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

	char str[100], a, t=' '; int i = 0, j=0;
	printf("¬ведите строку \n");
	a = getchar();
	while (a != '\n')
	{
		str[i] = a;
		i++;
		a = getchar();
	}
	str[i] = '\0';

	while (str[j]!='\0')
	{
		if (str[j + 1] == '\0') j++;
		else
		{
			t = str[j];
			str[j] = str[j + 1];
			str[j + 1] = t;
			j += 2;
		}
		
	}
	puts(str);


	
	getchar();
}
