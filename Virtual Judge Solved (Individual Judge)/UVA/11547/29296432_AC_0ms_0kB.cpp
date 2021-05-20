#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n ;
        scanf("%d",&n);
        int sum =(((((n*567)/9)+7492)*235)/47)-498;
        printf("%d\n",abs(sum/10%10));
    }
    return 0;
}
