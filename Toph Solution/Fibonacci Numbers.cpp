#include <bits/stdc++.h>
int main()
{
    int n;
    int f[100];
    f[1] = 1;
    f[2] = 1;
    for(int i = 3; i <= 55; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    scanf("%d",&n);
    printf("%d\n",f[n]);
    return 0;
}
