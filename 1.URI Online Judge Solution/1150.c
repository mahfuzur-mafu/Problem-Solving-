#include <stdio.h>
int main()
{
    int a,b,n,z,x=0;
    scanf("%d",&n);
    do{
        scanf("%d",&z);
    }
    while(n>=z);
    for(a=n,b=0; b<z; a++)
    {
        b+=a;
        x++;
    }
    printf("%d\n",x);
    return 0;
}
