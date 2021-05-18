#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int count=0;
    while(a>0)
    {
        a=a/b;
        count++;
    }
    printf("%d\n",count);
}
