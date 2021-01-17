#include<stdio.h>
int main()
{
    int j,i=0;
    unsigned long long int a;
    double b[131072];
    while(scanf("%llu",&a)!=EOF)
    {
        b[i]=sqrt(a);
        i++;
    }
    i=i-1;
    for(j=i; j>=0; j--)
    {
        printf("%.4lf\n",b[j]);
    }
    return 0;

}
