#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int year,dif;
        scanf("%d",&dif);
        if(dif<2015)
        {
            year = 2015 - dif;
            printf("%d D.C.\n", year);
        }
        else
        {
            year = dif - 2014;
            printf("%d A.C.\n", year);
        }
    }
    return 0;
}

