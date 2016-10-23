#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

const int a=3, b=5;



main()
{
    srand(time(NULL));
    int m[a][b], i, j, st1, st2, temp;
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
    printf("\n ¬ведите стобцы массива дл¤ обмена \n");
    scanf("%d",&st1);
    scanf("%d",&st2);
    for (i=0; i<a; i++)
    {
            temp=m[i][st1-1];
            m[i][st1-1]=m[i][st2-1];
            m[i][st2-1]=temp;
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
getchar();
}
