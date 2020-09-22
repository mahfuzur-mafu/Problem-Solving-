#include <bits/stdc++.h>
int main()
{
    int n,i;
    int a,b,c;
    double x,y;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        c = 0;
        scanf("%d %d %lf %lf", &a, &b, &x, &y);
        while(a <= b)
        {
            a *= (x / 100.0) + 1.0;
            b *= (y / 100.0) + 1.0;
            c++;
            if (c > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (c <= 100)
            printf("%d anos.\n", c);
    }
    return 0;
}



