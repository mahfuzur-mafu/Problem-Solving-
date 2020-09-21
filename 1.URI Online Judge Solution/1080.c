#include <stdio.h>

int main() {

int a[100],x=0,b,p,z=0;
    for(b=1;b<=100;b++)
    {
     scanf("%d",&a[b]);
     x++;


    if(a[b]>z)

    {
         p=x;
         z=a[b];

    }

    }
      printf("%d\n",z);
        printf("%d\n",p);

    return 0;
}
