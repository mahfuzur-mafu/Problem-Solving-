#include <stdio.h>

int main() {
int n,x,y,z,a;
    scanf("%d",&n);
    x=n/365;
    y=n%365;
    z=y/30;
    a=y%30;
    printf("%d ano(s)\n",x);
    printf("%d mes(es)\n",z);
    printf("%d dia(s)\n",a);

    return 0;
}
