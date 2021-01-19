#include <stdio.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    int arr[n];

       for(i=1;i<=n;i++)
    {
       scanf("%d",&arr[i]);
    }

        for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            arr[j]=i;
            j++;
        }
    }

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            arr[j]=i;
            j++;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}


