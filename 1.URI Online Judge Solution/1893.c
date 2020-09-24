#include <stdio.h>
int main()
{
    int n,m;

    scanf( "%d %d",&n,&m);
    if(3 <= m && m <= 96 && m > n)
    {
        printf("crescente\n");
    }
    else if(3 <= m && m <= 96 && m<n)
    {
        printf("minguante\n");
    }
    else if(0 <= m && m <= 2)
    {
        printf("nova\n");
    }
    else if(97 <= m && m <= 100)
    {
        printf("cheia\n");
    }

    return 0;
}

