#include<iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int t,i=1;
    string str,rev;
    cin>>t;
    cin.ignore();
    while(i<=t)
    {
        getline(cin,str);
        rev=str;
        reverse(rev.begin(),rev.end());
        if(rev==str)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
            printf("Case %d: No\n",i);
        }
        i++;
    }
    return 0;
}
