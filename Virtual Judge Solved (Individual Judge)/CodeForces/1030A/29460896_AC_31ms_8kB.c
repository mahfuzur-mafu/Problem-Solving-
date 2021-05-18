#include<stdio.h>
int main()
{
    int arr[100],n,count=0,next=0;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        {
            count ++;
        }
        else if(arr[i]==1)
        {
            next++;
        }
    }
    if(next>=1)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }
    next=0,count=0;


}
