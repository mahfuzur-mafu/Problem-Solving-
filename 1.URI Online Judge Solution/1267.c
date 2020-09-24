#include <stdio.h>
int main()
{
    int n,m,a,b,sum=0;

    int i,j;
    while(1)
    {

        scanf("%d %d",&n,&m);
        if(n==0 && m==0)

            break;

          int A[m][n];
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)

                scanf("%d",&A[i][j]);

        }
        for(a=0; a<n; a++)
        {
            for(b=0,sum=0; b<m; b++)

                sum=sum+A[b][a];

            if(sum==m)
            {
                printf("yes\n");
                break;
            }

            else

                sum=0;

        }
        if(sum==0)

            printf("no\n");

    }
    return 0;
}

