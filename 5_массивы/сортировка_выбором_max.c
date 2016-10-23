#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define	size 15

    main()
{
    srand(time(NULL));
	int m[size], i, j, n, temp, max;
	for (i = 0; i < size; i++)
	{
		m[i] = rand() % 100 + 1;
	}
	for (i = 0; i < size; i++)
	{
		printf("%5d", m[i]);
	}
	printf("\n");
            for(i=0;i<size;i++)
            {
            max=size-1-i;
            for(j=0; j<size-i; j++)
            {
                if(m[max]<m[size-1-j-i]) max=size-1-j-i;
            }
            temp=m[size-1-i];
            m[size-1-i]=m[max];
            m[max]=temp;
            }
  	for (i = 0; i<size; i++)
	{
		printf("%5d", m[i]);
	}

	printf("\n");
	getchar();
}
