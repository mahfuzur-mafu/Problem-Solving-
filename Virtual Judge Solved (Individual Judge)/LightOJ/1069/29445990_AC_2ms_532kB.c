#include <stdio.h>
int main()
{
    int n;
    int l;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a<=b)
        {
            l=b*4+19;
        }
        else
        {
            l=(2*a-b)*4+19;
        }
        printf("Case %d: %d\n",i,l);
    }
    return 0;
}
