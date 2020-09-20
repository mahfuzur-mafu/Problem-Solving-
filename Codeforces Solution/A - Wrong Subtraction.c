
#include <stdio.h>
int main()
{
    int n,m,i;
    scanf("%d",&m);
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

        if(m%10!=0)
        {
            m=m-1;
        }
        else if(m%10==0)
        {
            m=m/10;
        }

    }

    printf("%d",m);
    return 0;
}
