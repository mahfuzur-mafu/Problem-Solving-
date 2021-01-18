#include <stdio.h>
int main()

{
    int n,i,j,a[100];
    printf("Enter number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter The Array [%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("After Reversing:\n\n");
    for(i=n-1;i>=0;i--)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}
