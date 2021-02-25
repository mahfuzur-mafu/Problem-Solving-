#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&m);
    int arr[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<m; i++)
    {
        int low=lower_bound(ar, ar+n, arr[i])-ar-1;
        int  high=upper_bound(ar, ar+n, arr[i])-ar;
        if(low >0 && high>= n)
        {
            printf("%d X\n",ar[low]);
        }
        else if(low >=0 && low < n && high >= 0 && high < n)
        {
            printf("%d %d\n",ar[low],ar[high]);
        }
        else if(low <0 && high <n)
        {
            printf("X %d\n",ar[high]);
        }
        else
            printf("X X\n");

    }
}
