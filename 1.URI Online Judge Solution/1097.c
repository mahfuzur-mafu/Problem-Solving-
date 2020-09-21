#include <stdio.h>

int main() {

int i,n,b=7;
    for(i=1;i<=9;i=i+2)
    {
        for(n=1;n<=3;n++)
        {
            printf("I=%d J=%d\n",i,b);
       b--;
        }
        b=b+5;
    }

    return 0;
}
