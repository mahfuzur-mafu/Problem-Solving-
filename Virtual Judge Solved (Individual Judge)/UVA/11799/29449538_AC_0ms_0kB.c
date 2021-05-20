#include<stdio.h>
int main()
{

    long int n,i,j;
    long int m,elements;
    scanf("%ld",&n);
    for(i=1; i<=n; i++)
    {
        int temp=0;
        scanf("%ld",&m);
        for(j=1; j<=m; j++)
        {
            scanf("%ld",&elements);
            if(elements >temp)
            {
                temp=elements;
            }
        }
        printf("Case %ld: %ld\n",i,temp);
    }
    return 0;
}

