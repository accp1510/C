#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

const int a=3, b=5;

main()
{
    srand(time(NULL));
    int m[a][b], i, j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<b; j++)
        {
            m[i][j]=rand()%10+1;
        }
    }
    for (i=0; i<a; i++)
    {
        for (j=0; j<b; j++)
        {
            printf("%3d",m[i][j]);
        }
        printf("\n");
    }
    getchar();
}
