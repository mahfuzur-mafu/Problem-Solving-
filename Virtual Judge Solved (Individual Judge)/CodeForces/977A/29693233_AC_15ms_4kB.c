#include <stdio.h>
int main ()
{
    int x,n;
    scanf("%d %d",&x,&n);
    for(int i=0;i<n;i++)
    {
        if(x%10==0)
        {
            x/=10;
        }
        else
        {
            x--;
        }
    }
    printf("%d\n",x);
}
