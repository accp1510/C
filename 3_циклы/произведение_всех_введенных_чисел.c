#include <stdio.h>
#include <stdlib.h>

main()
{
    int s=1, a , i;
    printf("Vvedite chislo \n");
    for (i=1; i<=5; i++)
    {
    		scanf("%d",&a);
    	s=s*a;
    
    }
    printf("Proizv %d \n",s);
	
	getchar();
    getchar();
}
