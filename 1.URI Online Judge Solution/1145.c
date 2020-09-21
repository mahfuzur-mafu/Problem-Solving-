#include <stdio.h>
int main()
{
    int x,y,z,i,b=0;
  scanf("%d",&x);
  scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
    b++;
        if(b==x)
         {
             printf("%d",i);
         }

        else
            {
                printf("%d ",i);
            }

        if(b==x)
        {
            b=0;
            printf("\n");
        }

    }
    return 0;
}
