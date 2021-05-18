#include<stdio.h>
int binary(int n)
{
    int bnum = 0;
    int remainder;
    int i = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        bnum += remainder*i;
        i *= 10;
    }
    return bnum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int tc = 1;
    int a,b,c,d;
    int i,j,k,l;
    while(n--)
    {
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        scanf("%d.%d.%d.%d",&i,&j,&k,&l);

        if(binary(a)==i&&binary(b)==j&&binary(c)==k&&binary(d)==l)
        {
            printf("Case %d: Yes\n",tc++);
        }
        else
        {
            printf("Case %d: No\n",tc++);
        }

    }
    return 0;

}

