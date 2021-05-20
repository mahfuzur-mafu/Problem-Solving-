#include<bits/stdc++.h>
int main()
{
    int n,array[1001];
    int c,d,i,swap;
    while(scanf("%d",&n)!=EOF)
    {
        int count =0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&array[i]);
        }

        for (c = 0 ; c < ( n - 1 ); c++)
        {
            for (d = 0 ; d < n - c - 1; d++)
            {
                if (array[d] > array[d+1])
                {
                    swap       = array[d];
                    array[d]   = array[d+1];
                    array[d+1] = swap;
                    count ++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",count);
    }

}