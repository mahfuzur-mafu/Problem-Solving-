#include <stdio.h>
int main()
{
    long long int i,n,sum=0;
    while(scanf("%lld",&n)!=EOF)
    {


    for(i=1;i<=n;i++)
    {
        sum=sum+i;

    }
     printf("%lld\n",sum);
        sum=0;

    }
    return 0;
}
