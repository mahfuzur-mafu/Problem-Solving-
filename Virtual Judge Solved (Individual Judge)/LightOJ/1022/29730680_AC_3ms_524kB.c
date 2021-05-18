#include <stdio.h>
#include <math.h>
#define PI 2*acos(0.0)
int main()
{
    int a,b;
    double n,r;
    scanf("%d", &b);
    for(a=1; a<=b; a++)
    {
        scanf("%lf", &r);
        n=((r+r)*(r+r))-(PI*r*r);
        printf("Case %d: %.2lf\n",a,n);
    }
}
