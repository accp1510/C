#include <stdio.h>			
#include <stdlib.h>


main() 							

{
int n, s, d, e;														//объ¤вление
printf("vvedite 3h znachnoe chislo\n");								//вывод на экран
scanf("%d",&n);
e=n%10;
d=n/10%10;
s=n/100;															//сканирование переменной
printf("rezultat ediniz %d",e);	 		//результат		
getchar();						
}
//printf("rezultat sotni %d desjatki %d ediniz %d",s,d,e);
