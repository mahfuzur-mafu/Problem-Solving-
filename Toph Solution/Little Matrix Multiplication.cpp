#include <bits/stdc++.h>
int main()
{
    int arr[2][2],arr1[2][2];
    int i,j,k,res[2][2],sum=0;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }


    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                sum = sum + arr[i][k]*arr1[k][j];
            }

            res[i][j] = sum;
            sum = 0;
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d ", res[i][j]);
            printf("\n");
    }
}



