#include <bits/stdc++.h>
int main()
{
    double h,m,angel;
    scanf("%lf",&h);
    scanf("%lf",&m);

    angel=0.5*(60*h-11*m);

    if(angel>180)
    {
        angel=360-angel;
    }

    printf("%.7lf",angel);

}
