#include <stdio.h>

int main() {

  int   i,n,x,y;
    scanf("%d",&x);
    scanf("%d",&y);

    if(x<y)
    {
        for(i=x+1; i<y; i++)
        {
            if(i%5==2 || i%5==3)
                printf("%d\n",i);
        }
    }
    else if(x>y)
    {
        for(n=y+1; n<x; n++)
        {
            if(n%5==2 || n%5==3)
                printf("%d\n",n);
        }
    }

    return 0;
}
