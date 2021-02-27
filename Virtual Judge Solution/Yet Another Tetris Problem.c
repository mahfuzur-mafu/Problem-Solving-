#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int m;
        int even =0,odd=0,swap;
        scanf("%d",&m);
        int arr[m];
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr[j]);
        }
        for (int c = 0 ; c < ( m - 1 ); c++)
        {
            for (int d = 0 ; d < m - c - 1; d++)
            {
                if (arr[d] > arr[d+1])
                {
                    swap       = arr[d];
                    arr[d]   = arr[d+1];
                    arr[d+1] = swap;
                }
            }
        }

        for(int i=0; i<m; i++)
        {
            if(arr[i]%2==0)
            {
                even ++;
            }
            else
                odd++;
        }
        if(even && odd)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");

    }
}
