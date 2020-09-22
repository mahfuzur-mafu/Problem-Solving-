#include <bits/stdc++.h>
int main()
{
    int n,m,sum=0;
    int i,a,j;
    scanf("%d",&a);
    for(j=1;j<=a;j++)
    {


    scanf("%d %d",&n,&m);

    sum=0;
    if(n%2==0)
    {
        n++;

        for(i=1;i<=m;i++,n=n+2)
        {
            sum=sum+n;
        }
    }
    else  if(n%2!=0)
    {

        for(i=1;i<=m;i++,n=n+2)
        {
            sum=sum+n;
        }
    }

    printf("%d\n",sum);

    }
}
