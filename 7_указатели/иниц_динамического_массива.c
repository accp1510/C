#include <stdio.h>
#include <stdlib.h>

main()
{
int *p, i, n;
scanf("%d",&n);
p=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
{
	*(p+i)=i;
	printf("%3d",*(p+i));
}
free(p);
getchar();
}
