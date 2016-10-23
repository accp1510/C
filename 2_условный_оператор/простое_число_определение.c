#include <stdio.h>
#include <stdlib.h>

main()
{
    int a, i , k;
    printf("Vvedite chislo \n");
    scanf("%d",&a);
	for (i=2; i<=a/2; i++)
    {
    if (a%i==0)
    {k++;
	}
	}
	if (k==0) {	printf("proctoe");}
	else{printf("sloznoe");	}
	
	getchar();
    getchar();
}
