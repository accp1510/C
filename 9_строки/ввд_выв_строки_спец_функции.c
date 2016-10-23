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

	char a; char st[50];
	gets(st);
	puts(st);
	a=getchar();
	putchar(a);
	
	getchar();
}
