#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m;
        scanf("%d",&m);
        if(m==2)
           printf("2\n");
        else if(m%2==0)
        {
                printf("0\n");
        }
        else if(m%2!=0)
        {
            printf("1\n");
        }

    }
    return 0;
}
