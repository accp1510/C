#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define size 10

main()
{
	srand(time(NULL));
	int m[size], i, s=0;
	for (i=0; i<size; i++)
	{
		m[i]=rand()%10+1;
	}
	for (i=0; i<size; i++)
	{
		s=s+m[i];
		printf("%d \n",m[i]);
	}
	printf("sum %d \n",s);
getchar();
getchar();
}
