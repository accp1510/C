#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define size 5

main()
{
	srand(time(NULL));
	int m[size], i;
	for (i=0; i<size; i++)
	{
		//scanf("%d",&m[i]);
		m[i]=rand()%100+1;
	}
	for (i=0; i<size; i++)
	{
		printf("%d \n",m[i]);
	}
getchar();
getchar();
}

