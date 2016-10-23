#include <stdio.h>
#include <stdlib.h>

main()
{
    int k=0 , i;
    float s=0;
    printf("Vvedite chislo \n");
    scanf("%d",&i);
    while (i!=-1)
    {
    	
		s=s+i;
		k++;
		scanf("%d",&i);
    	
    	
	}
	if (k==0) {printf(" nenado tak \n");}
	else {
	s=(float)s/k;
    printf("Srednee ravno %.2f \n",s);
	}
	getchar();
    getchar();
}

