#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>
#define size 10

void main()
{
	setlocale(LC_ALL, "RUS");

		int i, k, n, max, m[size];
		FILE *f;
	/*		
			f=fopen("test.txt","r");
	
			for(i=0;i<size;i++)					//знаем количество данных в файле
				{
					fscanf(f,"%d",&k);
					printf("%d \n",k);
				}
			while(!feof(f))						//ищем завершение файла
				{
					fscanf(f,"%d",&n);
					printf("%d \n",n);
				}
			fclose(f);
	*/
			f=fopen("test.txt","r");
			fscanf(f,"%d",&max);
			while(!feof(f))
				{
					fscanf(f,"%d",&n);
					if(max<n) max=n;
				}
			printf("%d \n",max);
			fclose(f);
}
