#include<stdio.h>
int main()
{
    int n,i,a,b,s,temp;
    scanf("%d\n",&n);

    for(i=1;i<=n;i++)
    {
       scanf("%d\n",&a);
       scanf("%d\n",&b);
        if(a<b)
        {
        temp=a;
        a=b;
        b=temp;
        }
        while(a%b!=0)
        {
            s=a;
            a=b;
            b=s%a;
        }
        printf("%d\n",b);
    }
    return 0;
}
