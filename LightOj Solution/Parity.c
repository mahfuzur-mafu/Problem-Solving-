#include <stdio.h>
int main()
{
    int t,i,n;
    scanf("%d", &t);
    for (i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int count=0;
        while(n)
        {
            count=count+n%2;
            n=n/2;
        }
        if(count % 2)
        {
            printf("Case %d: odd\n", i);
        }

        else
        {
            printf("Case %d: even\n", i);

        }
    }
    return 0;
}
