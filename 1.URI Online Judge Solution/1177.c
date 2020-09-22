#include <stdio.h>

int main() {

    int a[1000],x,i,z;
    scanf("%d",&x);
     for(i=0,z=0; i<1000; i++)
     {
         printf("N[%d] = %d\n",i,z);
         z++;
         if(z==x)
            z=0;

     }

    return 0;
}

