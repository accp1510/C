#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float Nalog(float, float);

main()
{
	int z, s;
	float nl, znl;
	printf("Vvedite summu \n");
	scanf("%d",&z);
	printf("Vvedite stavku \n");
	scanf("%d",&s);
	nl=Nalog(z,s);
	printf("nalog %0.2f \n",nl);
	getchar();
	getchar();
}

float Nalog(float a, float b)
{
	float nl, znl;
  	nl=a/100*b;
  	znl=a-a/100*b;
	return nl;
}
