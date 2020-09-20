#include <stdio.h>

int main()
{

    int n,i;
    int x,y,avg;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);

        avg=(x+y)/2;
        if(avg%2==0)
            printf("Sadia will be happy.\n");
        else
            printf("Oops!\n");
    }
    return 0;
}


