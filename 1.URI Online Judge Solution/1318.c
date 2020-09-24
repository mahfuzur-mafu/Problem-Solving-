#include <stdio.h>

int main()
{
    int n,m,i,a,count;
    int array[10001];

    while (1)
    {
        scanf("%d %d",&n,&m);
        if(n==0 && m==0)
      {
          break;
      }
        memset(array,0,sizeof(array));
        count=0;

        for (i=0;i<m;i++)
        {
            scanf("%d",&a);
            array[a]++;
            if (array[a] == 2)
                count++;
        }

        printf("%d\n",count);
    }

    return 0;
}
