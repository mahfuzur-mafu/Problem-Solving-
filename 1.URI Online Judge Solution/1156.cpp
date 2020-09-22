#include<bits/stdc++.h>
int main()
{
    float i,a=1,b,s=0;
    for(i=1; i<=39; i=i+2)
    {
        b=i/a;
        s=s+b;
        a=a*2;
    }

    printf("%.2f\n",s);
    return 0;
}
