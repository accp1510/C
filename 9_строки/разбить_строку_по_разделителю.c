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

	char str[100], *p; int i=0;
	printf("¬ведите строку \n");
	gets(str);
	p=strtok(str," ");
	while (p!=NULL)
	{
		printf("%s \n",p);
		p=strtok(NULL, " ");
		i++;
	}
	printf("„исло слов в строке %d \n",i);
	getchar();
}
