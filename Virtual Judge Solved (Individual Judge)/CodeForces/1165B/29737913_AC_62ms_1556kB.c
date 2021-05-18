
#include <stdio.h>

void msort(int ar[],int l,int m,int r)
{
    int left=m-l+1;
    int right=r-m;
    int leftar[left+1],rightar[right+1];

    for(int i=l,j=0; i<m+1; i++,j++)
    {

        leftar[j]=ar[i];
    }

    for(int i=m+1,j=0; i<=r; i++,j++)
    {
        rightar[j]=ar[i];
    }
    int i=0,j=0,k=l;

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

}
void merges(int arr[],int l,int h)
{
    if(l>=h)
    {
        return  ;
    }
    int m=(l+h)/2;
    merges(arr,l,m);
    merges(arr,m+1,h);
    msort(arr,l,m,h);

}
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);

    }
    merges(ar,0,n-1);
    long long int  prb=1;
    for(i=0; i< n; i++)
    {
        if(ar[i]>=prb)
        {
            prb++;
        }
    }
    printf("%lld\n",prb-1);
    return 0;
}

