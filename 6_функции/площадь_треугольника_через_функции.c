#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float sTreg(float, float);

main()
{
	int a, h;
	float s;
	printf("Vvedite osnovanie \n");
	scanf("%d",&a);
	printf("Vvedite visotu \n");
	scanf("%d",&h);
	s=sTreg(a,h);
	printf("%0.2f \n",s);
	getchar();
	getchar();
}

float sTreg(float a, float b)
{
	float s;
	s=0.5*a*b;
	return s;
}
