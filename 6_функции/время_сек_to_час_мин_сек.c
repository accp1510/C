#include <stdio.h>
#include <stdlib.h>

void STime(int, int *, int *, int *);

main()
{
	int ss, s, m, c;
	printf("vvedite secundi \n");
	scanf("%d",&ss);
	STime(ss,&s,&m,&c);
	printf(" sec %5d min %5d chas %5d",s,m,c);
	getchar();
}

void STime(int sec, int *s, int *m, int *ch)
{
	*m=sec/60%60;
	*ch=sec/3600;
	*s=sec%3600%60;
}
