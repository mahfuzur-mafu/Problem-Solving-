#include <stdio.h>
int main()
{
    int n,m,i;
    printf("Enter A = ");
    scanf("%d",&n);
    printf("Enter B = ");
    scanf("%d",&m);


    for(i=n; i<=m; i++)
    {
        //if(n>m)
            //break;
        if(i%2==0)
        {
            if(i%3==0 && i%5==0)
            {
                printf(" %d ",i);
            }
        }
    }

}
