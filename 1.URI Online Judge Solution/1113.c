#include <stdio.h>

int main() {
  int a,b;
   while(1)
   {
       scanf("%d%d",&a,&b);
       if(a==b)
       {
           break;
       }
       else
       {
           if(a<b)
           {
               printf("Crescente\n");
           }
           else
           {
               printf("Decrescente\n");
           }
       }
   }

    return 0;
}
