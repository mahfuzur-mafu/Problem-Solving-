#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c;
    cin>>n;
    int arr[101] = {};
    for( i = 0; i < n; i++)
    {

        cin >> c;
        arr[c]++;
    }

    int res = 0;
    for( i = 0; i <= 100; i++)
    {
        res += arr[i] / 2;
    }
    cout << res << endl;
    return 0;
}
