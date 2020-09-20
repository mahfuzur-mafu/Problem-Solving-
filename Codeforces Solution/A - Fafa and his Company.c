#include <stdio.h>

int main()
{
    int n,count=0;
    int m=1;
  scanf("%d",&n);
    while(m!=n)
    {
        if(n%m==0)
            count++;
            m++;

    }
    printf("%d",count);
    return 0;
}

