#include <bits/stdc++.h>

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

    while(1)
    {
        int n;

        scanf("%d",&n);
        int ar[n];
        if(n==0)
        {
            break;
        }
        else
            for(int i=0; i<n; i++)
            {

                scanf("%d",&ar[i]);
            }
        merges(ar,0,n-1);
        printf("%d",ar[0]);
        for(int i=1; i<n; i++)
        {
            printf(" %d",ar[i]);
        }
       printf("\n");
    }
    return 0;
}
