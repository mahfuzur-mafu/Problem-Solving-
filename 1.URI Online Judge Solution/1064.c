#include <stdio.h>

int main() {

   float a,count=0,avg;
   int i,y=0;
   for(i=1;i<=6;i++)
{
        scanf("%f",&a);
   if(a>=0)
   {
       y++;
       count=count+a;

   }

}
       avg=count/y;
       printf ("%d valores positivos\n",y);
       printf("%.1lf\n",avg);

    return 0;
}
