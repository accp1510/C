#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define	size 15

	main()
{
	srand(time(NULL));
	int m[size], i, j, temp, n=0;
	for (i = 0; i < size; i++)
	{
		m[i] = rand() % 100 + 1;
	}
	for (i = 0; i < size; i++)
	{
		printf("%5d", m[i]);
	}
	printf("\n");



for (j = 0; j < size - 1; j++)
{

	n=0;
	
	//for (i=0; i < size -1 -j ; i++)
	for (i=size-2; i >= j ; i--)
	{
		if (m[i] > m[i + 1])
		{	
			n++;
			temp = m[i];
			m[i] = m[i + 1];
			m[i + 1] = temp;
		}
	}
	if (n==0) break;
}

	
	
	
	
	
	for (i = 0; i<size; i++)
	{
		printf("%5d", m[i]);
	}

	printf("\n");
	getchar();
}
