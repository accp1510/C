#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);

main()
{
	int x=5, y=11;
	swap(&x,&y);
	printf("%d %d",x,y);
}

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
