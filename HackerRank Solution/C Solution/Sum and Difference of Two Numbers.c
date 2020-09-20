#include <stdio.h>
int main()
{

    float a,b,sum2,dif2;
    int n,m,sum1,dif1;
    scanf("%d%d",&n,&m);
    scanf("%f%f",&a,&b);
     sum1 = n+m;
     sum2 = a+b;
     dif1 = n-m;
     dif2 = a-b;
    printf("%d %d\n",sum1,dif1);
    printf("%.1f %.1f",sum2,dif2);

    return 0;
}

