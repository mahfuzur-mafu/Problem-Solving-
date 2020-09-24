#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int ara[n][n];
        int a,b,c,d,e,f,g,h;
        for(a=0; a<n; a++)
        {
            for(b=0; b<n; b++)
                ara[a][b]=3;
        }
        for(a=0; a<n; a++)
            ara[a][a]=1;
        d=n-1;
        for(a=0,b=d; a<n; a++,b--)
            ara[a][b]=2;
        for(a=0; a<n; a++)
        {
            for(b=0; b<n; b++)
                printf("%d",ara[a][b]);
            printf("\n");
        }
    }
    return 0;
}


