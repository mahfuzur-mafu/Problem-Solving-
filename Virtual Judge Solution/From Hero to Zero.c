#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=0; i<x; i++)
    {
        int count=0;
        long long int n,k;
        scanf("%lld %lld",&n,&k);
        while(n!=0)
        {
            count =count + n%k;
            if(n>=k)
                count++;
            n=n/k;
        }
        printf("%d\n",count);
    }
}
