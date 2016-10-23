#include <stdio.h>
#include <stdlib.h>

main()
{
    int a, b, c;
    printf("проверить стороны треугольника \n");
    printf("введите сторону а \n");
    scanf("%d",&a);
    printf("введите сторону b \n");
    scanf("%d",&b);
    printf("введите сторону c \n");
    scanf("%d",&c);
    if (((a+b)>c)&&((a+c)>b)&&((b+c)>a)) {printf("стороны корректны \n");}
    else {printf("стороны НЕ корректны \n");}
    getchar();
    getchar();
}
