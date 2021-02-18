#include <stdio.h>
int main()
{
    long long int n,m;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        printf("%lld\n",n+(n-1)/(m-1));
    }

}

