#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

main()
{
	srand(time(NULL));
	int x, a;
	x=rand()%100+1;
	printf("IGRA ugaday chislo \n");
	scanf("%d",&a);
	while(a!=x)
	{
		if (a>x)
		{
			printf("vvedennoe BOLSHE \n");
			scanf("%d",&a);
		}
		else
		{
			printf("vvedennoe MENSHE \n");
			scanf("%d",&a);
		}
		
	}
	printf("UGADAL \n");
	getchar();
	getchar();
}
