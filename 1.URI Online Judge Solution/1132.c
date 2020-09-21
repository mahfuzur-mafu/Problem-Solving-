#include <stdio.h>

int main() {

     int i,x,y,count=0;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x<y)
    {
        for(i=x;i<=y;i++)
            if(i%13!=0)
            count=count+i;
    }
   else if(x>y)
    {
        for(i=y;i<=x;i++)
            if(i%13!=0)
            count=count+i;
    }
    printf("%d\n",count);

    return 0;
}
