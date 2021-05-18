#include <stdio.h>
#include<algorithm>
using namespace std;
int main()
{

    long long  int i,n,x,y;
    long long   int a[100005];
    long long   int ar[100005];
    long long   int arr[100005];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(i=0; i<n-2; i++)
    {
        scanf("%lld",&arr[i]);
    }

    sort(a,a+n);
    sort(ar,ar+n-1);
    sort(arr,arr+n-2);

    for(i=0; i<n; i++)
    {
        if(a[i]!=ar[i])
        {
            x=a[i];
            break;
        }
    }

    for(i=0; i<n-1; i++)
    {
        if(ar[i]!=arr[i])
        {
            y=ar[i];
            break;
        }
    }

    printf("%lld\n",x);
    printf("%lld\n",y);


}
