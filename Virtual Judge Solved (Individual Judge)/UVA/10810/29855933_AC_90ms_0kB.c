#include <stdio.h>
#include <stdlib.h>


long int msort(int ar[],int l,int m,int r)
{

    long int count = 0;
    int i,j,k;
    int left=m-l+1;
    int right=r-m;
    int leftar[left+1],rightar[right+1];

    for( i=l,j=0; i<m+1; i++,j++)
    {

        leftar[j]=ar[i];
    }

    for( i=m+1,j=0; i<=r; i++,j++)
    {
        rightar[j]=ar[i];
    }
    i=0,j=0,k=l;
    while(i<left&&j<right)
    {

        if(leftar[i]<rightar[j])
        {
            ar[k]=leftar[i];
            i++;
        }

        else
        {
            ar[k]=rightar[j];
            count+=left-i;
            j++;
        }
        k++;

    }
    while(j<right)
    {
        ar[k++]=rightar[j++];
    }
    while(i<left)
    {
        ar[k++]=leftar[i++];

    }

    return count;

}
long int  merges(int arr[],int l,int h)
{
    long int count = 0;
    int m=(l+h)/2;
    if(l>=h)
    {
        return 0;
    }

    count+=  merges(arr,l,m);
    count+=  merges(arr,m+1,h);
    count+=  msort(arr,l,m,h);

    return count;

}

int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)break;

        int ar[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&ar[i]);
        }
        printf("%ld\n",merges(ar,0,n-1));
    }
    return 0;
}
