#include<stdio.h>
int main()
{
    int n1,n2,n3;
    int i,t,n,m;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n1);
        scanf("%d",&n2);
        scanf("%d",&n3);
        n=(n1>n2)?n1:(n2>n3)?n2:n3;
        if(n2>n1 && n1>n3 || n3>n1 && n1>n2)m = n1;
        if(n1>n2 && n2>n3 || n3>n2 && n2>n1)m = n2;
        if(n1>n3 && n3>n2 || n2>n3 && n3>n1)m = n3;

        printf("Case %d: %d\n",i,m);
    }
    return 0;
}
