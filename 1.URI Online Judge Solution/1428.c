#include <stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",(a/3)*(b/3));
    }
    return 0;
}
