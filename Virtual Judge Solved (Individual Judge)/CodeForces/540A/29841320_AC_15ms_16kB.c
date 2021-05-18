#include <stdio.h>
int main ()
{
    int n,diff,key=0,k;
    scanf("%d",&n);
    char ar[10000],arr[10000];
    scanf("%s %s",&ar,&arr);
    for(int i=0; i<n; i++)
    {
        diff=abs(ar[i]-arr[i]);
        if(diff>5)
        {
            k=10-diff;
            key=key+k;
        }
        else
        {
            key=key+ diff;
        }
    }
    printf("%d\n",key);
}
