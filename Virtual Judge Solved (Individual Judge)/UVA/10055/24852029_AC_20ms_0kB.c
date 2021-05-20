#include<stdio.h>
int main()
{
     long long int a,b;
    while((scanf("%lli%lli",&a,&b))!=EOF)
    {
        if(a>b)
        {
            printf("%lli\n",(a-b));
        }

        else
        {
            printf("%lli\n",(b-a));
        }

    }
    return 0;
}