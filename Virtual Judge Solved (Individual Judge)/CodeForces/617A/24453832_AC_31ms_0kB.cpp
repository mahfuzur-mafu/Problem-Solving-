#include <stdio.h>
main()
{
    int x,y,z,step;
    scanf("%d",&x);
    y=x/5;
    z=x%5;
    if(z==0)
    {
        printf("%d",y);
    }
     else
    {
        step=y+1;
        printf("%d",step);
    }

    return 0;

}
