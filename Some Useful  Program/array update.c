#include <stdio.h>
int main ()
{
    int a[100];
    int i,n,index,add;
    printf("How many Numbers you want to insert?\n");
    scanf("%d",&n);

    printf("Enter %d array elements\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("\n\n");
    printf("Enter Index Number\n");
    scanf("%d",&index);

    printf("Enter new value\n");
    scanf("%d",&add);
    printf("The Value in Index %d was %d\n\n",index,a[index]);
    //a[index]=add;
    printf("\n");

    if(index<n+1 || index>=0)

    {
        for(i=n;i>=index;i--)
        {
            a[i]=a[i-1];
        }
        a[index-1]=add;
        n++;

    printf("The Updated array\n");
    for(i=0; i<n; i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
    }
}
