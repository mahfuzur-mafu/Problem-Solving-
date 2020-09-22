#include <stdio.h>
int main()
{
    float i,a,sum=0;
    for(i=1;i<=100;i++)
    {
        a=1/i;
        sum=sum+a;
    }
    printf("%.2f\n",sum);
}
