#include<stdio.h>
int main()
{
    int n,i,d,c;
    int swap;
    int array[1000];
    scanf("%d",&n);
    while(n--)
    {
        int m,count=0;
        scanf("%d",&m);
        for(i = 0; i < m; i++)
        {
            scanf("%d", &array[i]);
        }
        for (c = 0 ; c <  m - 1 ; c++)
        {
            for ( d = 0 ; d < m - c - 1; d++)
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
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
}
