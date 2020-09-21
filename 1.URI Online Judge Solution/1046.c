#include <stdio.h>

int main() {

     int a,b,time;
    scanf("%d",&a);
    scanf("%d",&b);
    time=(b-a);
    if(time<0)
    {
        time=24+(b-a);
    }
    if(a==b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n",time);
    }

    return 0;
}
