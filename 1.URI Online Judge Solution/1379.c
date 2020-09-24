#include <stdio.h>
int main()
{
    int a,b;

    while((scanf("%d %d",&a,&b),a&&b))
    {

         printf("%d\n",2*a-b);
    }
    return 0;
}
