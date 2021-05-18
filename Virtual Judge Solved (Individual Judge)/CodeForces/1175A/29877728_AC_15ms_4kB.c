#include <stdio.h>
int main()
{
    long long int x;
    scanf("%lld",&x);
    for(int i=0; i<x; i++)
    {

        long long int n,k,count=0;
        scanf("%lld %lld",&n,&k);
        while(n!=0)
        {
            count =count + n%k;
            if(n>=k)
                count++;
            n=n/k;
        }
        printf("%lld\n",count);
    }
}
