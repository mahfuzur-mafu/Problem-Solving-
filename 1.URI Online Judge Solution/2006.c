#include <stdio.h>
int main()
{
    int a,b,i,count=0;
    scanf("%d",&a);
    for(i=0;i<5;i++)
    {
        scanf("%d",&b);
        if(a==b)
        count++;

    }

    printf("%d\n",count);

    return 0;
}
