#include <stdio.h>

int main()
{
    int i,n,a,b,c,d;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        a=i*i;
        b=i*i*i;
        printf("%d %d %d\n",i,a,b);
        c=a+1;
        d=b+1;
        printf("%d %d %d\n",i,c,d);
    }
    return 0;
}
