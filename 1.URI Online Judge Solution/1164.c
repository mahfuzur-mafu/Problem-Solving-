#include <stdio.h>

int main() {


    int x,n,i,a,sum=0,d;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d",&n);
        d=n/2;
        sum=0;
        for(a=1;a<=d;a++)
        {
            if(n%a==0)
            {
                sum=sum+a;
            }
        }
        if(sum==n)
    {
        printf("%d eh perfeito\n",n);
    }
    else
    {
        printf("%d nao eh perfeito\n",n);
    }
    }

    return 0;
}
