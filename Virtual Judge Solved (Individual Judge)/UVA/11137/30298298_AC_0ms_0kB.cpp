#include<bits/stdc++.h>
using namespace std;
unsigned long long chng[10005];
int coins[25];
int main()
{

    for(int i=1; i<=21; i++)
    {
        coins[i]=i*i*i;
    }

    chng[0]=1;
    for(int i=1; i<=21; i++)
    {
        int k = coins[i];
        for(int j=k; j<=10005; j++)
        {
            chng[j]=chng[j]+chng[j-k];
        }
    }

    int n;
    while(cin>>n)
    {
      cout<<chng[n]<<endl;
    }
    return 0;
}
