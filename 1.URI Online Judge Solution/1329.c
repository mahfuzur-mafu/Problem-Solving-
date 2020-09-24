#include<stdio.h>
int main()

{
    int a[10000],j,n,i,m,c;

    while(scanf("%d",&n)==1)

    {
        m=0;
        c=0;
       if(n==0)
    {
        break;
    }
   for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(j=0;j<n;j++)
   {
        if(a[j]==0)
        {
            m++;
        }
        else{
            c++;
        }
     }

    printf("Mary won %d times and John won %d times\n",m,c);

  }
    return 0;
}

