#include <stdio.h>
#include <stdlib.h>
#define size 5

int SumArr(int[],int);

main()
{
	int m[size]={1,2,3,4,5}, s;
	s=SumArr(m,size);
	printf("%d",s);
	getchar();
}

int SumArr(int b[], int n)
{
	int s=0, i;
		for(i=0;i<n;i++)
		{
			s=s+b[i];
		}
		return s;
}
