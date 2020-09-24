#include <bits/stdc++.h>
int main()
{
    int n,count1=0,count2=0;
    int i,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a==0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1>count2)
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}
