#include <stdio.h>

int main() {

double i,a,count=0;
    for(i=1;i<=6;i++)
    {
        scanf("%lf",&a);
        if(a>0)
          {
              count++;
          }

    }
    printf("%.0lf valores positivos\n",count);

    return 0;
}
