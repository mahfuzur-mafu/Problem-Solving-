#include<stdio.h>
int main()
{
    int i,n,x,counter[20001];
    scanf("%d",&n);
    for(i=0; i<=2000; i++)
    {
        counter[i]=0;
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        counter[x]++;
    }
    for(i=0; i<=2000; i++)
    {
        if(counter[i]>0)
        printf("%d aparece %d vez(es)\n",i,counter[i]);
    }
    return 0;
}

