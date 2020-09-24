#include <bits/stdc++.h>

int main()
{
    char str[101];
    double n,t, s=0.0;
    while(gets(str))
    {
        scanf("%lf",&n);
        t=t+n;
        s=s+1.0;
    }
    printf("%.1lf\n",t/s);
    return 0;
}
