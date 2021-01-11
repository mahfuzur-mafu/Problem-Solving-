#include<stdio.h>

int main()
{

    int n,m,i,a,b;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf ("%d", &m);
        if(m>10)
        {
            a=m-10;
            b=10;
            printf("%d %d\n",a,b);
        }
        else
        {
            a=0;
            printf("%d %d\n",a,m);
        }
    }

    return 0;
}

