#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char num[1000];
    int count=0;
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%s",num);
        for(int i=0; i<n; i++)
        {
            if(num[i]=='8')
            {
                count++;
            }
        }
        cout<<min(count,n/11)<<endl;
    }
    return 0;
}
