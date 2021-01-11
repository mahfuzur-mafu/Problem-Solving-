#include <stdio.h>
int main()
{
    int T;
    int i=0;
    scanf("%d",&T);
    for(i=1; i<=T;i++)
    {
        int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        int c;
        c=a+b;
        printf("Case %d: %d\n",i,c);
    }
  return 0;

}

