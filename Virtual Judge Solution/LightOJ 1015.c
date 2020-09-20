#include <stdio.h>
main()
{
    int x,y,z,n,i,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=0;
        scanf("%d",&z);
        for(x=1; x<=z; x++)
       {

            scanf("%d",&y);

        if(y<=0)

            continue;

        else
        {
            sum=sum+y;
        }

       }
               printf("Case %d: %d\n",i,sum);


    }
    return 0;

}
