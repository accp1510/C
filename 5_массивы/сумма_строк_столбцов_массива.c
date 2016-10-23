#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

const int a=3, b=5;

main()
{
    srand(time(NULL));
    int m[a][b], sr[a], st[b], i, j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<b; j++)
        {
            m[i][j]=rand()%10+1;
            st[j]=0;
            sr[i]=0;
        }
    }
                for (i=0; i<a; i++)
                {
                    for (j=0; j<b; j++)
                    {
                        sr[i]=sr[i]+m[i][j];
                    }
                }
                for (j=0; j<b; j++)
                {
                    for (i=0; i<a; i++)
                    {
                        st[j]=st[j]+m[i][j];
                    }
                }
    for (i=0; i<a; i++)
    {
        for (j=0; j<b; j++)
        {
            printf("%3d",m[i][j]);
        }
        printf(" ==> %3d",sr[i]);
        printf("\n");
    }
    
    for (j=0; j<b; j++)
        {
            printf("  |");
        }
        printf("\n");
    for (j=0; j<b; j++)
        {
            printf("%3d",st[j]);
        }
    getchar();
}
