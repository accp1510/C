#include <stdio.h>
#include <stdlib.h>

int Sppd(int, int, int, int, int, int);

main()
{
    int xa1, ya1, xa2, ya2, xb1, yb1, xb2, yb2, a, b, c, d;
    char ex='y';
    //int ex=0;
    printf("прямоугольник задается диагональю x1;y1 -> x2;y2 \n");
    printf("программа проверяет пересекаются ли 2 прямоугольника \n");
        while(ex=='y')
        {
            printf("введите начальную точку диагонали 1-го прямоугольника \n");
            scanf("%d",&xa1);
            scanf("%d",&ya1);
            printf("введите конечную точку диагонали 1-го прямоугольника \n");
            scanf("%d",&xa2);
            scanf("%d",&ya2);
            printf("введите начальную точку диагонали 2-го прямоугольника \n");
            scanf("%d",&xb1);
            scanf("%d",&yb1);
            printf("введите конечную точку диагонали 2-го прямоугольника \n");
            scanf("%d",&xb2);
            scanf("%d",&yb2);
            a=Sppd(xa1, ya1, xb1, xa2, ya2, yb1);
            b=Sppd(xa1, ya1, xb1, xa2, ya2, yb2);
            c=Sppd(xa1, ya1, xb2, xa2, ya2, yb1);
            d=Sppd(xa1, ya1, xb2, xa2, ya2, yb2);
            if (a==1 || b==1 || c==1 || d==1) {printf("Прямоугольники Пересекаются!!! \n");}
            else {printf("Прямоугольники НЕ пересекаются \n");}
            printf("Продолжить? y/n \n");
            scanf("%c",&ex);
            //scanf("%d",&ex);
        }
    getchar();
    getchar();
}

int Sppd(int x1, int y1, int x, int x2, int y2, int y)
{
    int r=0;
    if ((x1<x)&&(x<x2)&&(y1<y)&&(y<y2)) r=1;
    return r;
}
