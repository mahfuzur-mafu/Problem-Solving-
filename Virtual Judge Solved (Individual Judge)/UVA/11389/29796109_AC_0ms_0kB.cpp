#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,d,r,swap,temp;

    while (scanf("%d%d%d",&n,&d,&r))
    {
        if(n==0 && d==0 && r==0)
        {
            break;
        }


        int ar[n],arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&ar[i]);
        }

        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }

        sort(ar,ar+n);
        sort(arr,arr+n);
        int sum=0;
        for(int i=0; i<n; i++)
        {
            if (ar[i]+arr[n-i-1]> d)
            {
                sum +=(ar[i]+arr[n-1-i] -d) *r;
            }
        }
        printf("%d\n",sum);
    }
}
