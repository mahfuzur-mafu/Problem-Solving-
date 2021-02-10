#include <stdio.h>
int main()
{
    int ar[1000000];
    int t,n,i,j;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        for( i = 0 ; i < n ; i++)
        {
            scanf("%d",&ar[i]);
        }
        int maxvalue = -200000 ;
        int maxdif = -200000;
        for( j=0; j<n-1; j++)
        {
            if(maxvalue<ar[j])
            {
                maxvalue = ar[j];
            }
            if(maxvalue-ar[j+1]>maxdif)
            {
                maxdif = maxvalue-ar[j+1];
            }
        }

        printf("%d\n",maxdif);
        j=0;
    }

}
