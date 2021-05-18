#include <iostream>
using namespace std;
int main()
{
    int arr[10000],lis[10000],mx,tc=1;
    int n,i,j,k;
    while(scanf("%d",&arr[0]))
    {
        if(arr[0]<0)
            break;

        n=1;
        while(scanf("%d",&arr[n])!=EOF)
        {
            if(arr[n]<0)
                break;
            else
                n++;
        }
        for(i=0; i<n; i++)
        {
            lis[i]=1;
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<i; j++)
            {
                if(arr[i]<arr[j] && lis[i]<=lis[j])
                {
                    lis[i]=lis[j]+1;
                }
            }
        }

        mx=0;
        for(i=0; i<n; i++)
        {
            if(mx<lis[i])
                mx=lis[i];
        }
        printf("Test #%d:\n",tc++);
        printf("  maximum possible interceptions: %d\n\n",mx);
    }
    return 0;
}
