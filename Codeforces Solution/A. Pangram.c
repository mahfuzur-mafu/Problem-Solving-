#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{

    int n,i,count=0;
    cin>>n;
    cin.ignore();
    char s[n];
    gets(s);

    for(i=0; i<n; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=97+s[i]-65;
        }
    }

    sort(s,s+n);


    for(i=0; i<n-1; i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }

    if(count == 25)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
