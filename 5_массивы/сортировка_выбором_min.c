#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define	size 15

	main()
{
	srand(time(NULL));
	int m[size], i, j, temp, min;
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

	min=j;
	
	for (i=j+1; i < size ; i++)
	{
		if (m[min] > m[i]) min=i;
		
	}
			temp = m[j];
			m[j] = m[min];
			m[min] = temp;
}

	
	
	
	
	
	for (i = 0; i<size; i++)
	{
		printf("%5d", m[i]);
	}

	printf("\n");
	getchar();
}
