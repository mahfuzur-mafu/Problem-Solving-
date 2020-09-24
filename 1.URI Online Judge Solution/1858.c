#include <stdio.h>
main()
{
int i,n,temp,res=1,b=0;
    scanf("%d",&n);
        int a[n];
    for(i=0;i<n;i++)

        scanf("%d",&a[i]);

temp=a[b];
for(b=0;b<n;b++)

{

    if(a[b]<temp)
    {
       temp=a[b];
        res=b+1;
    }
}
    printf("%d\n",res);
}
