#include <bits/stdc++.h>
int main()
{
    int n;
    int a[10]= {4,7,47,74,447,474,477,744,747,774};
    scanf("%d",&n);
    int count=0;
    for(int i=0; i<10; i++)
    {
        if(n%a[i]==0)
        {
            printf("YES\n");
            break;
        }

        else 
        {
            count++;
        }
    }
    if(count==10) 
    {
        printf("NO\n");
    }
    return 0;
}
