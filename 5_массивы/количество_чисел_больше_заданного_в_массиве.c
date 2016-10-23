#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define	size 11

    main()
{
	srand(time(NULL));
	int m[size], i, j=0, a;
	printf("Vvedite chislo \n");
	scanf("%d",&a);
	for (i=0; i<size; i++)
	{
		m[i]=rand()%100+1;
	}
	for (i=0; i<size; i++)
	{
		printf("%5d",m[i]);
	}
	for (i = 0; i<size; i++)
	{
		if(m[i]>a) j++;
	}
	printf("\n");
	printf("%d",j);
	getchar();
}
