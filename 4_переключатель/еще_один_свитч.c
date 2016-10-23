#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

main()
{
    char a;
    printf("Введите первую букву вашего имени \n");
    scanf("%c",&a);
    switch(a)
    {
        case 'А': printf("Анютка молодец \n"); break;
        case 'П': printf("Басик умный \n"); break;
        case 'И': printf("Ира будет врачом \n"); break;
        default:  printf("Ахухухухуху \n");
    }
    getchar();
    getchar();    
}
