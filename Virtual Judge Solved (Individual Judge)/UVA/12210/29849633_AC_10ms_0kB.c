#include<stdio.h>
int main()
{
    int n,m,i;
    int tc=1;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(n == 0 && m == 0)
        {
            break;
        }
        int ar[10010],arr[10010];
        for( i = 0; i < n; i++)
        {
            scanf("%d",&ar[i]);
        }
        int min=ar[0];
        for( i=1; i<n; i++)
        {
            if(min>ar[i])
            {
                min=ar[i];
            }

        }
        for( i = 0; i < m; i++)
        {
            scanf("%d",&arr[i]);
        }

        if(n-m<=0)
        {
            
   printf("Case %d: 0\n",tc++);
        }
        else
        {
            printf("Case %d: %d %d\n",tc++,n-m, min);
        }
    }
return 0;
}