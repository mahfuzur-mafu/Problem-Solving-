#include <stdio.h>
int main()
{
    int a,b,c;
    while(1)
    {
        scanf("%d",&a);
        scanf("%d",&b);

        if(a==0 && b==0)
        {
            break;
        }
        c=a+b;
        printf("%d\n",c);
    }
    return 0;
}
