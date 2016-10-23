#include <stdio.h> 					
#include <stdlib.h>


main() 							

{
int a, b, c, p;												//объ¤вление
printf("vvedite a\n");										//вывод на экран
scanf("%d",&a);												//сканирование переменной
printf("vvedite b\n");
scanf("%d",&b);
printf("vvedite c\n");
scanf("%d",&c);
p=a*b*c;													//вычислени¤
printf("Proizvedenie %d i %d i %d ravno %d ",a,b,c,p);	 	//результат		
getchar();						
}
