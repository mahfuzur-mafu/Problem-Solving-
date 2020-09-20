#include <stdio.h>
int main()
{
    int n,i,a,d,e;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>10)
        {
            d=a-10;
            e=10;
            printf("%d %d\n",d,e);
        }
        else
        {
            d=0;
            printf("%d %d\n",d,a);
        }
    }
    return 0;
}
