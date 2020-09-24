#include <stdio.h>
int main ()
{

    int  n;
    int a,b;
    int x,y;

    scanf("%d", &n);

    scanf("%d %d", &a, &b);
    scanf("%d %d", &x, &y);

    if (((n>=a) && (n<=b)) && ((n>=x) && (n<=y)))
       {
            printf("possivel\n");
       }
    else
       {
            printf("impossivel\n");
       }

       return 0;

}

