#include<stdio.h>
#define TRUE 1
#define FALSE 0

int main()
{
    int i,n,target;
    int found=FALSE;
    scanf("%d",&n);
    scanf("%d",&target);
    int array[n];
    for(i=0; i<n; i++)
    {

        scanf("%d",&array[i]);
    }
    found = FALSE;
    for(i=0 ; i < n ; i++)
    {
        if(array[i] == target)
        {
            printf("YES\n");
            found = TRUE;
            break;
        }
    }

    if(FALSE == found)
    {
        printf("NO\n");
    }
    return 0;
}

