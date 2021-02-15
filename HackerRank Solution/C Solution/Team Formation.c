#include <stdio.h>
int main()
{
    int n,res;
    scanf("%d",&n);


    if(n<=3)
    {
        printf("YES\n1\n");
    }

    else if(n<=6)
    {
        printf("YES\n2\n");
    }

   else  if(n<=9)
    {
        printf("YES\n3\n");
    }

    else
    {
        printf("NO\n");
    }

}

