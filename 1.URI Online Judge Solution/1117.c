#include <stdio.h>

int main()
{


    double x,avg,count=0,sum=0;
    while(1)
    {
        if(count==2)
            break;
        scanf("%lf",&x);
        if(x>=0 && x<=10)
        {
            count++;
            sum=sum+x;
        }
        else
        {
            printf("nota invalida\n");

        }
    }
    avg=sum/2.00;
    printf("media = %.2lf\n",avg);

    return 0;
}
