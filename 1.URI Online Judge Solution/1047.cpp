#include <bits/stdc++.h>
int main()
{
    int hour,min,fh,fm,x,y;
    scanf("%d%d%d%d", &hour, &min, &fh, &fm);
    if(hour==fm && fh==fm && fm==min)
    {
        x=min-fm;
        y=24+hour-fh;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y,x);
    }
    else if(hour==fh && fm>min)
    {
        x=fm-min;
        y=hour-fh;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y,x);
    }
    else if(hour==fh && min>fm)
    {
        x=60-min+fm;
        y=24-hour+fh-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y,x);
    }
    else if(min==fm && hour<fh)
    {
        x=0;
        y=fh-hour;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y, x);
    }
    else if(min==fm && hour>fh)
    {
        x=0;
        y=24-hour+fh;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y, x);
    }
    else if(fh>hour && fm>min)
    {
        x=fm-min;
        y=fh-hour;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y, x);
    }
    else if(hour<fh && min>fm)
    {
        x=60-min+fm;
        y=fh-hour-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y, x);
    }
    else if(hour>fh && min<fm)
    {
        x=fm-min;
        y=24-hour-1+fh;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y, x);
    }
    else if(hour>fh && min>fm)
    {
        x=60+fm-min;
        y=24+fh-hour-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y, x);
    }
    return 0;
}
