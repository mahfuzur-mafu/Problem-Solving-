#include<stdio.h>
int main()
{
   long long int n,i,sum;
    scanf("%lld",&n);

        if(n%2==0)
        {
            sum=n/2;
        }
        else if(n%2!=0)
        {
            sum=sum-(n+1)/2;
        }

    printf("%lld",sum);


    return 0;
}
