#include <stdio.h>
int main()
{

    int a[10000],x,y,i,n;

    while(scanf("%d %d",&x,&y) != EOF)
    {
        if(x==y)
        {
            printf("*\n");
            for(i=0; i<y; i++)
            {
                scanf("%d",&n);
                a[n-1]++;
            }
        }
        else
        {
            for(i=0; i<x; i++)
             {
                    a[i]=0;
             }
            for(i=0; i<y; i++)
            {
                scanf("%d",&n);
                a[n-1]++;
            }
            for(i=0; i<x; i++)
             {
                    if(a[i]==0)
                    {
                        printf("%d ",i+1);
                    }
             }

            printf("\n");
        }
    }

    return 0;
}

