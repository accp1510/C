#include <stdio.h>
#include <stdlib.h>

main()
{
    int s, i;
    s=0;
    for (i=2;i<=20;i+=2)
    {
	s=s+i;
	}
    printf("Summa chetnih ot 1 do 20 ravna %d \n",s);
    getchar();
    getchar();
}

