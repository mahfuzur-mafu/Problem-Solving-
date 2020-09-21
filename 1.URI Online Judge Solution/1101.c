#include <stdio.h>

int main()
{

    int x,y,z,sum=0;
    while(1)
    {
        scanf("%d%d",&x,&y);
        if(x<=0 || y<=0)
        {
            break;
        }
        else

        {
            sum=0;
            if(x<y)
            {
                for(z=x; z<=y; z++)
                {
                    printf("%d ",z);
                    sum=sum+z;
                }
                printf("Sum=%d\n",sum);

            }


            else if(x>y)
            {
                for(z=y; z<=x; z++)
                {
                    printf("%d ",z);
                    sum=sum+z;
                }
                printf("Sum=%d\n",sum);


            }

        }

    }

    return 0;
}
