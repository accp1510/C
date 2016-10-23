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

	char log[100]="login", pass[100]="QwErTy", lg[100], ps[100]; int i=0;
	printf("Введите имя пользователя \n");
	gets(lg);
	printf("Введите пароль \n");
	gets(ps);
	while(lg[i]!='\0')
	{
		lg[i]=tolower(lg[i]);
		i++;
	}	
	//lgn[i]='\0' если через новый массив закрываем строку вручную
	if ((strcmp(log,lg)==0)&&(strcmp(pass,ps)==0)) {printf("Заходи )) \n");}
	else {printf("Пошёл вон!!! \n");}
	
	getchar();
}
