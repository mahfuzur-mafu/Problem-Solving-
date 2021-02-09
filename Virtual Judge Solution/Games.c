#include <stdio.h>
int main()
{
    int n;
    int a[100];
    int b[100];
    int count=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
