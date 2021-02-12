#include<stdio.h>

int Prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n,x;
    scanf("%d",&n);
    int count=0;

    for(int j=1; j<=n; j++)
    {
        x = Prime(j);
        if(x==1)
        {
            ++count;
        }
    }
    printf("%d\n",count);
}
