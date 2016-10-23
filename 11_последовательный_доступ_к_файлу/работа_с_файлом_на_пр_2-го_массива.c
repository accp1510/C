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

const int a=50, b=25;

void main()
{
	setlocale(LC_ALL, "RUS");
		
		srand(time(NULL));
		FILE *studF;										//объ¤вл¤ем файл
		studF=fopen("stud.dat","w");						//открываем файл с режимом дл¤ перезаписи
		int m[a][b], i, j, n;								//обычный 2мерный массив
    	for (i=0; i<a; i++)
    	{
        for (j=0; j<b; j++)
        {
            m[i][j]=rand()%10+1;
        }
    	}
    	for (i=0; i<a; i++)
    	{
        for (j=0; j<b; j++)
        {
            fprintf(studF,"%3d",m[i][j]);					//записываем данные в файл
        }
        fprintf(studF,"\n");
    	}
		fclose(studF);										//закрываем файл
		studF=fopen("stud.dat","r");						//открываем файл с режимом дл¤ чтени¤
		while(!feof(studF))									//функци¤ перемещени¤ курсора до конца файла
		{
			fscanf(studF,"%d",&n);							//сканируем из файла
			printf("%d \n",n);
		}
		fclose(studF);										//закрываем файл
}
