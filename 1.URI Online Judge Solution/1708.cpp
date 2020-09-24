#include<bits/stdc++.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf",&a,&b);
    a=abs(a-b);
    c=ceil(b/a);
    printf("%.0lf\n",c);

    return 0;

}

