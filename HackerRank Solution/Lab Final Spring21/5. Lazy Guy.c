#include <stdio.h>
int main()
{
    int m,n,swap;
    scanf("%d",&m);
    scanf("%d",&n);
    int coin[m];
    for(int i=0; i<m; i++)
    {

        scanf("%d",&coin[i]);

    }


    int noc=0;


    for(int i = m-1; i>=0; i--)
    {
        if(coin[i]<=n)
        {
            noc+=n/coin[i];
            n=n%coin[i];

        }
    }
    printf("%d\n",noc);
}

