#include <stdio.h>
#include <stdlib.h>

main()
{
    int s, i, a;
    s=0;
    a=0;
    for (i=1;i<=10;i++)
    {
	a=a+2;
	s=s+a;
	}
    printf("Summa chetnih ot 1 do 20 ravna %d \n",s);
    getchar();
    getchar();
}

