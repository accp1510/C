#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define size 10

main()
{
	srand(time(NULL));
	int m[size], i, max, min;
	for (i=0; i<size; i++)
	{
		m[i]=rand()%10+1;
	}
	max=m[0];
	min=m[0];
	for (i=0; i<size; i++)
	{
		printf("%d \n",m[i]);
	}
	for (i=0; i<size; i++)
	{	
		if (m[i]>max) max=m[i];
		if (m[i]<min) min=m[i];

	}
printf("macsimalniy %d \n",max);
printf("minimalniy %d \n",min);
getchar();
getchar();
}

