
#include <stdio.h>
main()
{
    int i,n,hour,min,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         sum=0;
        scanf("%d%d",&hour,&min);
        sum=sum+(23-hour)*60;
        sum=sum+60-min;
        printf("%d\n",sum);
    }
    return 0;
}
