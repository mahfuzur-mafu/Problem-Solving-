#include <stdio.h>
#include <math.h>

int main()
{
    int i,a,b,count=0,t;
   while(scanf("%d%d",&a,&b) && a!=0 && b!=0)
   {
       count=0;
       for(i=a;i<=b;i++)
       {
           t=sqrt(i);
           if(i==t*t)
            count++;
       }
       printf("%d\n",count);

   }

    return 0;
}
