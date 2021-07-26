#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,sum=0;
    scanf("%d %d %d",&n,&j,&k);
    for(i=1; i<=k; i++)
    {
        sum+=i*n;
    }
    if(sum>j)
    {
        cout<<(sum-j)<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

}
