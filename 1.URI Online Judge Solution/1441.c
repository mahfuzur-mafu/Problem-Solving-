#include<stdio.h>
int main()
{

    while(1)
    {
         int n,max,temp;
         int i,j,k;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        temp=n;
        max=temp;
        while(temp>1)
        {
            if(temp%2!=0)
            {
                temp=(temp*3)+1;
            }
            else if(temp%2==0)
            {
                temp=(temp/2);
            }
            if(temp>=max)
            {
                max=temp;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}

