#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define	size 5

    main()
{
	srand(time(NULL));
	int m[size], i, s=0;
	for (i=0; i<size; i++)
	{
		m[i]=rand()%100+1;
	}
	for (i=0; i<size; i++)
	{
		printf("%5d",m[i]);
	}
	
	
	
	for (i = 0; i<size; i+=2)
	{
		s=s+m[i];
		
	}
	
	
	printf("\n");
	printf("%5d",s);
	getchar();
}
