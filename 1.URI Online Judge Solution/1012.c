#include <stdio.h>

int main() {
 double a,b,c,d,e,f,g,h;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    d=(a*c)/2;
    e=c*c*3.14159;
    f=((a + b) / 2)*c;
    g=b*b;
    h=a*b;
    printf("TRIANGULO: %.3lf\n",d);
    printf("CIRCULO: %.3lf\n",e);
    printf ("TRAPEZIO: %.3lf\n",f);
    printf ("QUADRADO: %.3lf\n",g);
    printf ("RETANGULO: %.3lf\n",h);


    return 0;
}

