#include <stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            printf("0\n");

        }
        else
        {
            printf("1\n");
        }
    }
    return 0;

}
