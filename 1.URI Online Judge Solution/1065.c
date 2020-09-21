#include <stdio.h>

int main() {

    int a=1,n,count=0;
     while (a<=5)
     {
         scanf("%d",&n);
         a++;
         if(n%2==0)
         count++;

     }

     printf("%d valores pares\n",count);
    return 0;
}
