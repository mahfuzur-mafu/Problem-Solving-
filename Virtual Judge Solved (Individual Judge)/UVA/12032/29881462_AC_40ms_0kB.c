#include <stdio.h>
int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0; j<tc; j++)
    {
        int n,i,arr[100001]={};
        int move=0,mn;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=1; i<=n; i++)
        {
            if(arr[i]-arr[i-1]>move)
            {
                move=arr[i]-arr[i-1];
            }
        }

        mn=move;
        for(i=1; i<=n; i++)
        {

                if(arr[i]-arr[i-1]>move)
            {
               mn++;
                break;
            }
            else if(arr[i]-arr[i-1]==move)
            {
                move--;
            }
        }
        printf("Case %d: %d\n",j+1,mn);

    }
}