#include <stdio.h>

int main() {

 int N[10],i,x;
    scanf("%d",&x);

    for(i=0; i<=9; i++)
    {

        printf("N[%d] = %d\n",i,x);
        x=x*2;
    }

    return 0;
}
