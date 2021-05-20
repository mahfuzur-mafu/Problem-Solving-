#include <bits/stdc++.h>
#include <string.h>
int main()
{
    int n;
    int i,j;
    scanf("%d", &n);
    for(i = 0; i <n; i++)
    {
        int m;
        scanf("%d",&m);
        char str[m];
        scanf("%s",str);
        int sum=0;
        for(j=0; j<m;)
        {
            if (str[j] == '.')
            {
                sum++;
                j=j+3;
            }
            else
              j++;
        }
        printf("Case %d: %d\n",i+1,sum);
    }
}

