#include <stdio.h>
int main()
{
    int n;
    double price;
    double amount = 0.00;
    int code, quan;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &code, &quan);
        if(code==1001)
            amount += (double) quan*1.50;
        else if(code==1002)
            amount += (double) quan*2.50;
        else if(code==1003)
            amount += (double) quan*3.50;
        else if(code==1004)
            amount += (double) quan*4.50;
        else if(code==1005)
            amount += (double) quan*5.50;
    }
    printf("%.2lf\n", amount);
    return 0;
}

