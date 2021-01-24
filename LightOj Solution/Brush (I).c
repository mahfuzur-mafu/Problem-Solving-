#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,j;
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        int m;
        scanf("%d",&m);
        for( j=1,sum=0; j<=m; j++)
        {

            scanf("%d",&a);
            if(a>0)   sum=sum+a;
        }
        if(sum>=0)
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
