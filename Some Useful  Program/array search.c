#include <stdio.h>
int main ()
{
    int a[100];
    int i,n,s,t,found=0;
    printf("Test Case : ");
    scanf("%d",&t);
    printf("HOW MANY ELEMENT : ");

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the Array Element [%d] : ",i);
        scanf("%d",&a[i]);

    }
    printf("\n\n");

    for(i=0; i<t; i++)
    {



            printf("Search Elememt : ");
            scanf("%d",&s);
            printf("\n\n");


            if(a[i]==s)
            {
                found=1;
            }


        if(found==1)
        {
            printf("%d found in array number: [%d] ",s,i);
        }
        else
        {
            printf("%d not found in this array",s);
        }
    }
    printf("\n\n");
}
