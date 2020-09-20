#include<stdio.h>
int main()
{
    int a,b,x,i,j;
    int res,sum;
    while(scanf("%d%d",&a,&b)==2 && b>0 && a>0)
    {
        sum=0;
        printf("%d %d ",a,b);
        if(a>b)
        {
            x=b;
            b=a;
            a=x;
        }
        for(i=a;i<=b;i++)
        {
            res=1;
            for(j=i;j!=1;j=j)
            {
                if(j%2==0)
                    j=j/2;
                else
                    j=3*j+1;
                res=res+1;
            }
            if(res>=sum)
                sum=res;
        }
        printf("%d\n",sum);
    }
    return 0;
}

