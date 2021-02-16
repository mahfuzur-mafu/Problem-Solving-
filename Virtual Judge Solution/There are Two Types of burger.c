#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    int x,y,burger;
    int sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        scanf("%d %d",&x,&y);

        burger = a/2;

        if(x>y)
        {
            if(burger>=b)
            {
                sum = b*x;
                a = burger-b;
                if(a>=c)
                {
                    sum += c*y;
                }
                else
                {
                    sum += a*y;
                }
            }
            else
            {
                sum = burger*x;
            }
        }

        else
        {
            if(burger>=c)
            {
                sum = c*y;
                a = burger-c;
                if(a>=b)
                {
                    sum += b*x;
                }
                else
                {
                    sum += a*x;
                }
            }
            else
            {
                sum = burger*y;
            }
        }
        printf("%d\n",sum);
    }
}
