#include <stdio.h>
#include <stdlib.h>


main()
{

int a=0, col1=0, col2=0, col3=0, col4=0, col5=0;
float pr=0, pr1=0, pr2=0, pr3=0, pr4=0, pr5=0;
printf("vvedite znachenie \n");
scanf("%d",&a);
while (a!=-1)
{
	switch(a)
	{
		case 5: col5++;
		break;
		case 4: col4++;
		break;
		case 3: col3++;
		break;
		case 2: col2++;
		break;
		case 1: col1++;
		break;
	}
	scanf("%d",&a);
}
pr=col5+col4+col3+col2+col1;
pr5=(float)col5/pr*100;
pr4=(float)col4/pr*100;
pr3=(float)col3/pr*100;
pr2=(float)col2/pr*100;
pr1=(float)col1/pr*100;
printf("prozent 5 %.2f \n",pr5);
printf("prozent 4 %.2f \n",pr4);
printf("prozent 3 %.2f \n",pr3);
printf("prozent 2 %.2f \n",pr2);
printf("prozent 1 %.2f \n",pr1);
getchar();
}
