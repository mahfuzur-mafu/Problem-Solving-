#include<stdio.h>
int main()
{
    int n,i,j,l;
    scanf("%d",&n);

    int size = 2*n-1;
    for( i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            l = i<j? i:j;
            l=l<size-i? l:size-i-1;
            l=l<size-j? l:size-j-1;
            printf("%d ",n-l);
        }
    printf("\n");

    }

    return 0;
}
