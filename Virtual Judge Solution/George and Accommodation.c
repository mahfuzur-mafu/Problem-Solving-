#include <stdio.h>
int main()
{
    int n;
    int count =0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(b-a>=2)
        {
            count++;
        }
    }
    printf("%d\n",count);
}
