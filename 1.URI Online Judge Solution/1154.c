#include <stdio.h>

int main() {

 int n;
    float x,sum=0,d=0;
    while(1)
    {
    scanf("%d",&n);

    if(n<0)
    {
        break;
    }
    else
    {
        sum=sum+n;
        d++;
    }

    }
     x=sum/d;
    printf("%.2f\n",x);


    return 0;
}
