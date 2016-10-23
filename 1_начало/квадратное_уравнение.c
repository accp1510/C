#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    int a, b, c;
    float d, x, x1, x2;
    printf("квадратное уравнение, уравнение вида - ax^2+bx+c=0 \n");
    printf("введите коэффициент а \n");
    scanf("%d",&a);
    printf("введите коэффициент b \n");
    scanf("%d",&b);
    printf("введите коэффициент c \n");
    scanf("%d",&c);
    d=b*b-4*a*c;
  //printf("d равен %.2f \n",d);
    if (d<0) {printf("корней нет \n");}
    if (d==0)
        {
        x=(-1*b)/(2*a);
        printf("x равен %.0f \n",x);
        }
    if (d>0)
        {
        x1=(-1*b-sqrt(d))/(2*a);
        printf("x1 равен %.0f \n",x1);
        x2=(-1*b+sqrt(d))/(2*a);
        printf("x2 равен %.0f \n",x2);
        }    
    getchar();
    getchar();
}
