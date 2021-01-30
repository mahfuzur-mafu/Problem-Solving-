#include <stdio.h>
#include <bits/stdc++.h>

int main()
{
    int i,n,temp;
    scanf("%d",&n);

  while(n--)
    {
        int num, last = 99, first = 0;
        scanf("%d",&num);

        for ( i = 0; i < num; ++i)
        {
            scanf("%d", &temp);

            if (temp < last)
            {
                last = temp;
            }
            if (temp > first)
            {
                first = temp;
            }
        }
        printf("%d\n", (first - last) * 2);
    }
    return 0;
}
