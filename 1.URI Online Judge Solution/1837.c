#include <stdio.h>
int main()
{
    int a,b,m,n,j,i;
    scanf("%d%d\n", &a,&b);
    if(a<0)
    {
        m=b;
        if(b<0) m=b*-1;
        for(i=0; i<m; i++)
        {
            n=a-i;
            if(n%b==0) break;
        }
        j=n/b;
    }
    else
    {
        j=a/b;
        i=a%b;
    }
    printf("%d %d\n",j,i);
    return 0;
}

