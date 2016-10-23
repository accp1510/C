#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int sRect(int, int);

main()
{
	int x, y, s;
	printf("Vvedite storonu a \n");
	scanf("%d",&x);
	printf("Vvedite storonu a \n");
	scanf("%d",&y);
	s=sRect(x,y);
	printf("Ploshad ravna %d \n",s);
	getchar();
	getchar();
}

int sRect(int a, int b)
{
	int s;
	s=a*b;
	return s;
}
