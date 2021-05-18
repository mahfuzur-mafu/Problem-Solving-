#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[1010],lis[1010];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
        lis[i]=1;

    }
    int mx=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i-1; j++)
        {
            if(arr[i]>arr[j] && lis[j]+1>lis[i])
            {
                lis[i]=lis[j]+1;
            }
        }
        mx=max(mx,lis[i]);
    }

    printf("%d\n",mx);

}

