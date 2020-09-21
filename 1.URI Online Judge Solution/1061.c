#include <stdio.h>
int main()
{
    int N,day1,day2,d1,d2,h1,h2,m1,m2,s1,s2,x,a,b,c;
    scanf("%*s %d ",&d1);
    scanf("%d %*s ",&h1);
    scanf("%d %*s",&m1);
    scanf("%d ",&s1);
    scanf("%*s %d ",&d2);
    scanf("%d %*s",&h2);
    scanf("%d %*s",&m2);
    scanf("%d",&s2);
    day1 = s1+(m1*60)+(h1*(60*60))+(d1*(24*60*60));
    day2 = s2+(m2*60)+(h2*(60*60))+(d2*(24*60*60));
    N=day2-day1;
    x =N/86400;
    N =N%86400;
    a =N/3600;
    N =N%3600;
    b =N/60;
    c =N%60;

    printf("%d dia(s)\n",x);
    printf("%d hora(s)\n",a);
    printf("%d minuto(s)\n",b);
    printf("%d segundo(s)\n",c);

    return 0;
}


