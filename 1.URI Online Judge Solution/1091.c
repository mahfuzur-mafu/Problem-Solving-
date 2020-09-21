#include <stdio.h>
int main()
{
    int a,b,c,d,n,i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        scanf("%d %d",&a,&b);
        for(i=1; i<=n; i++)
        {
            scanf("%d %d",&c,&d);
            if(a==c || b==d)
            {
                printf("divisa\n");
            }
            if(a<c && b<d)
            {
                printf("NE\n");
            }
            if(a<c && b>d)
            {
            printf("SE\n");
            }
            if(a>c && b<d)
            {
                 printf("NO\n");
            }
            if(a>c && b>d)
            {
              printf("SO\n");
            }

        }
    }
     return 0;
}

