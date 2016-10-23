#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>
#define size 55

void main()
{
	setlocale(LC_ALL, "RUS");

		int i, m[size];
		srand(time(NULL));
		FILE *f;
			f=fopen("test.txt","w");
				for(i=0;i<size;i++)
					{
						m[i]=rand()%10+1;
					fprintf(f," %2d",m[i]);
					}
			fclose(f);
}
