#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >>n;
    for(int i=1; i<=n; i++)
    {
        string st,rev;
        cin >>st;
        rev = st;
        reverse(rev.begin(),rev.end());
        if(st==rev)
        {
            cout << "Case "<<i<<": Yes"<<endl;
        }
        else
        {
            cout << "Case "<<i<<": No"<<endl;
        }
    }
    return 0;
}
