#include<stdio.h>
int main()
{

    int i,m,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       long long int a,b;
       scanf("%lld%lld",&a,&b);
       printf("Case %d: %lld\n",i,(a*b)/2);
    }
    return 0;
}