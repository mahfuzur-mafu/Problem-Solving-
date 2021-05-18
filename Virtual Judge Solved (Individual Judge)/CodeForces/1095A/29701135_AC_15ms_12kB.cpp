#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt = 1;
    string str;
    cin >> str;
    for(int i = 0; i < n; ++i)
    {
        cout << str[i];
        i=i+ cnt;
        cnt++;
    }
    return 0;
}

