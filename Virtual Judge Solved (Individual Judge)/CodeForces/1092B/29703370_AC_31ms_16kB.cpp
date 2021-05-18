#include <bits/stdc++.h>
int main()
{
    int n;
    int sum=0,swap;
    scanf("%d",&n);
    int arr[1000];
    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    for (int c = 0 ; c < ( n - 1 ); c++)
    {
        for (int d = 0 ; d < n - c - 1; d++)
        {
            if (arr[d] > arr[d+1])
            {
                swap       = arr[d];
                arr[d]   = arr[d+1];
                arr[d+1] = swap;
            }
        }
    }


    for (int i=1; i<n; i+=2)
    {
        sum =sum+ arr[i]-arr[i-1];
    }

    printf("%d\n",sum);
}

