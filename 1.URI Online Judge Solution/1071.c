#include <stdio.h>

int main() {
  int X,Y,count=0;
    scanf("%d",&X);
    scanf("%d",&Y);
    if(X==Y)
    {
        printf("%d\n",count);

    }
    else if(X<Y)
    {
       for(X=X+1;X<Y;X++)
       {
        if(X%2==1||Y%2==-1)
        count+=X;
       }

        printf("%d\n",count);
    }
     else if(X>Y)

       {
           for(Y=Y+1;Y<X;Y++)
        {
        if(Y%2==1||Y%2==-1)
        count+=Y;
        }
         printf("%d\n",count);
       }


    return 0;
}
