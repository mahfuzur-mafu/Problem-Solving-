#include<stdio.h>
int main()
{
    int n,m,arr[100];
    int count=0;
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]>=arr[m-1] && arr[i]>0)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
