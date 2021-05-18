#include<stdio.h>
int main()
{
    int i,even=0,odd=0;
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even>odd)

    {
        for(i=0; i<n; i++)
        {
            if(arr[i]%2!=0)
            {
                printf("%d\n",i+1);
                break;

            }
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                printf("%d\n",i+1);
                break;

            }
        }
    }
}
