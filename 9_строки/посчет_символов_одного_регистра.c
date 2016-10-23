#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>
#include <ctype.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	char str[100]; int i=0, j=0, k=0;
	printf("Введите строку \n");
	gets(str);
	while(str[i]!='\0')
	{
		i++;
		if (islower(str[i])!=0) j++;
	}
	k=i-j;
	printf(" Символов в строке - %d \n",i);
	printf(" Заглавных символов в строке - %d \n",k);
	printf(" Строчных символов в строке - %d \n",j);
	
	
	getchar();
}
