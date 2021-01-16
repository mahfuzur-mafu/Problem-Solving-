#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    int i;
    for(i=1; i<=n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a*a + b*b == c*c) || (a*a + c*c == b*b ) || ( b*b + c*c== a*a) )
        {
            printf("Case %d: yes\n",i);
        }
        else
        {
            printf("Case %d: no\n",i);
        }
    }

    return 0;
}
