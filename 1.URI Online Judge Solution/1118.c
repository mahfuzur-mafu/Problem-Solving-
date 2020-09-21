#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,temp_a=0,count=0,X;
loop:
    while(1)
    {
        scanf("%f",&a);
        if(a<0.0)
        {
            printf("nota invalida\n");
        }
        else if(a>=0.0 && a<=10.0)
        {
            temp_a+=a;
            count+=1;
            if(count==2)
            {
                break;
            }
        }
        else if(a!=0.0 && a!=10.0)
        {
            printf("nota invalida\n");
        }

    }
    printf("media = %.2f\n",temp_a/2.00);
    count=0.0;
    temp_a=0;

    goto stet;
stet:
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%f",&X);
    if(X==1.0)
    {
        goto loop;
    }
    else if(X==2.0)
    {
        exit(0);
    }
    else
    {
        goto stet;
    }

    return 0;
}
