#include <stdio.h>
int main()
{
    int n,i=0;
    int a,c;
    char b;

    scanf("%d",&n);

   while(i<n)
    {
        scanf("%d%c%d",&a,&b,&c);
        i++;

        if(a==c)
            printf("%d\n",a*c);
        else if(b >=65 && b<= 90)
            printf("%d\n",c-a);
        else
            printf("%d\n",c+a);
    }
    return 0;
}
