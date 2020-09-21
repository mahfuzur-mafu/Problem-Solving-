#include <stdio.h>

int main() {

  int a,b,even=0,odd=0,pos=0,neg=0;
    for(a=1;a<=5;a++)
    {
        scanf("%d",&b);
        if(b%2==0)
        {
            even++;
        }
         if(b%2==1 || b%2==-1 )
        {
            odd++;
        }
        if(b>0)
        {
            pos++;
        }
         if(b<0)
        {
            neg++;
        }
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

    return 0;
}
