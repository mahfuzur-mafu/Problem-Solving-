#include <stdio.h>
int main()
{
    int i,j;
    int n,m,x;

    scanf("%d %d",&n,&m);

    int count2=0;
    for(i=1;i<=n;i++)
    {
         int count1=0;
        for(j=1;j<=m;j++)
        {
            scanf("%d",&x);
            if(x>0)
            {
                count1++;
            }
        }
        if(count1==m)
        {
            count2++;
        }
    }
    printf("%d\n",count2);
    return 0;

}

