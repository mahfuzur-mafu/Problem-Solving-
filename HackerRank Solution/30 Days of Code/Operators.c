#include <stdio.h>
#include <math.h>
int main()
{
    double cost,t,ta;
    int tip,tax,sum;
    scanf("%lf%d%d",&cost,&tip,&tax);
     t=cost*(double)tip/100;
     ta=cost*(double) tax/100;
     sum=(int)round(cost+t+ta);
    printf("%d",sum);


}

