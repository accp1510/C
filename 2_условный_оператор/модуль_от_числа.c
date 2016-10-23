#include <stdlib.h>
#include <stdio.h>

main()
{
	float x;
	printf("Vvedite X \n");
	scanf("%f",&x);
	if (x>=0)
	{x=x;
	}
	else
	{x=-x;
	}
	printf("modul %.0f \n",x);
	
	//if (x<0) y=-y; ИЛИ if (x>=0) {;} else {y=-y;} можно опустить else или составной оператор
}
