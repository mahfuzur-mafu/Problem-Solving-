#include <stdio.h>

int main()
{
  float X,Y,Price;
   scanf("%f",&X);
   scanf("%f",&Y);
   if(X==1)
   {
       Price=Y*4.00;

   }
   else if(X==2)
   {
       Price=Y*4.50;
   }
   else if(X==3)
   {
       Price=Y*5.00;
   }
   else if(X==4)
   {
       Price=Y*2.00;
   }
   else if(X==5)
   {
       Price=Y*1.50;
   }

   printf("Total: R$ %.2f\n",Price);

    return 0;
}
