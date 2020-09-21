#include <bits/stdc++.h>
int main() {

    float a,b,c,x,y,z;
   scanf("%f",&a);
   scanf("%f",&b);
   scanf("%f",&c);
    x =(b*b)-(4*a*c);
    if (x<0)
    {
        printf("Impossivel calcular\n");
    }
    else if(a==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        y= (-b +sqrt(x))/(a+a);
        z= (-b -sqrt(x))/(a+a);

        printf("R1 = %.5lf\n",y);
        printf("R2 = %.5lf\n",z);
    }


    return 0;
}
