#include <stdio.h>
int main ()
{
    int a[100];
    int i,n;
    printf("HOW MANY ARRAY'S : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Array Element [%d] : ",i);
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        printf("Array element are : %d\n ",a[i]);
    }

}
