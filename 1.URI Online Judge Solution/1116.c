#include <stdio.h>

int main() {

int a,b,c,i=1;
    double d;
    scanf("%d",&a);
    while (i<=a)
    {

        scanf("%d",&b);
        scanf("%d",&c);
           i++;
        if(c==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            d=b/(c*1.00);
            printf("%.1lf\n",d);
        }
    }

    return 0;
}

