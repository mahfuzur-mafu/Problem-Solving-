#include <stdio.h>
int main ()
{
    int a[100];
    int i,n;
    int d;

    printf("HOW MANY ELEMENT : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Array Element [%d] : ",i);
        scanf("%d",&a[i]);

    }
    printf("\n\n");
   printf("Delete Array Index : ");
   scanf("%d",&d);
   for(i=d;i<n;i++)
   {
       a[i]=a[i+1];
   }
     printf("\n\n");
   printf("After Deleting Array's are : ");

   for(i=0;i<n-1;i++)
   {
       printf(" %d",a[i]);
   }

     printf("\n\n");
}
