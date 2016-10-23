#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define size 10

main()
{
	srand(time(NULL));
	int m[size], i, x, n=0;
	printf("vvedi chislo \n");
	scanf("%d",&x);
	for (i=0; i<size; i++)
	{
		m[i]=rand()%10+1;
	}
	for (i=0; i<size; i++)
	{
		printf("%d \n",m[i]);
	}
	for (i=0; i<size; i++)
	{	
		if (x==m[i]) printf("\n est chislo, ego nomer %d \n",i);
		n++;
	}
	if (n==0) printf("\n net takih \n");
getchar();
getchar();
}
