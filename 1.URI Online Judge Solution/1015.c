#include <stdio.h>

int main() {

      double x1,x2,y1,y2,s1,s2,s;
    scanf("%lf",&x1);
    scanf("%lf",&y1);
    scanf("%lf",&x2);
    scanf("%lf",&y2);
    s1=x2-x1;
    s2=y2-y1;
    s= sqrt((s1*s1)+(s2*s2));
    printf("%.4lf\n",s);


    return 0;
}
