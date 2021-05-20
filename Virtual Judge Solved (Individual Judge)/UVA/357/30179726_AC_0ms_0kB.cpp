#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  chng[30005];
    int coins[5] = {1,5,10,25,50};
    for(int i=0; i<30005; i++)
    {
        chng[i]=0;
    }
    chng[0]=1;
    for(int i=0; i<5; i++)
    {
        int k = coins[i];
        for(int j=k; j<=30005; j++)
        {
            chng[j]=chng[j]+chng[j-k];
        }
    }

    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(chng[n]==1)
        {
            printf("There is only %lld way to produce %d cents change.\n",chng[n],n);
        }
        else
        {
            printf("There are %lld ways to produce %d cents change.\n",chng[n],n);
        }
    }
    return 0;
}
