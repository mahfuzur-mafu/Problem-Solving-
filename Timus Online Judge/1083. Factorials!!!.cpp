#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    cin>>n;
    cin>>str;
    int len = str.size();

    unsigned  long long sum=1;
    for(int i = n ; i > 0 ; i=i-len)
    {
        sum=sum*i;
    }
    cout<<sum<<endl;
    return 0;
}
