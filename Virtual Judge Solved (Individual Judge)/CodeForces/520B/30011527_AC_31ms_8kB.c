#include <stdio.h>
int main()
{
    int a,b,count;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d\n",a-b);
    }
    else
    {
        count=0;
        while(a<b)
        {
            if(b%2==0)
            {
                b=b/2;
                count++;
            }
            else
            {
                b=b+1;
                count++;
            }
        }
        printf("%d\n",count+(a-b));
    }

    return 0;
}
