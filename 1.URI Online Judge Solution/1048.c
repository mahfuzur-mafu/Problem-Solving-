#include <stdio.h>

int main() {
 int d;
     float a,b,c;
     scanf("%f",&a);
     if(a>=0 && a<=400.00)
     {
        b=a*.15;
        c=a+b;
        d=15;
     }
     else if(a>=400.01 && a<=800)
     {
        b=a*.12;
        c=a+b;
        d=12;
     }
     else if(a>=800.01 && a<=1200)
     {
        b=a*.10;
        c=a+b;
        d=10;
     }
     else if(a>=1200.01 && a<=2000)
     {
        b=a*.07;
        c=a+b;
        d=7;
     }
     else if(a>2000)
     {
        b=a*.04;
        c=a+b;
        d=4;
     }

     printf("Novo salario: %.2f\n",c);
     printf("Reajuste ganho: %.2f\n",b);
     printf("Em percentual: %d %%\n",d);

    return 0;
}
