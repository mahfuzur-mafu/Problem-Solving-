#include <stdio.h>

int main() {

   int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a<b && a<c)
    {
        if(b<c)
        {
            printf("%d\n%d\n%d\n",a,b,c);
        }
        else
        {
            printf("%d\n%d\n%d\n",a,c,b);
        }
    }
    if(b<c && b<a)
    {
        if(a<c)
        {
            printf("%d\n%d\n%d\n",b,a,c);
        }
        else
        {
            printf("%d\n%d\n%d\n",b,c,a);
        }
    }
    if(c<a && c<b)
    {
        if(c<b)
        {
            printf("%d\n%d\n%d\n",c,b,a);
        }
        else
        {
            printf("%d\n%d\n%d\n",c,a,b);
        }
    }
    printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;
}
