#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

const int a=5;

main()
{
    srand(time(NULL));
    int m[a][a], i, j, k, sum1=0, sum2=0;
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            m[i][j]=rand()%10+1;
        }
    }
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            printf("%3d",m[i][j]);
        }
        printf("\n");
    }
    
    j=0;
    k=a-1;
    for (i=0; i<a; i++)
        {   
            sum1=sum1+m[i][j];
            j++;
            sum2=sum2+m[i][k];
            k--;
        }
    
printf("\n Сумма Нисходящей диагонали => %d \n",sum1);
printf("\n Сумма Восходящей диагонали => %d \n",sum2);   
getchar();
getchar();
}
