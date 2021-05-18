#include<iostream>
#include <string.h>
#include <algorithm>
using namespace  std;
int main()
{
    int i;
    int arr[4];
    int a1,a2,a3;

    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];
    sort(arr,arr+4);
    a1 = arr[3] - arr[0];
    a2 = arr[3] - arr[1];
    a3 = arr[3] - arr[2];
    cout << a1 << " " << a2 << " " << a3 << endl;
    return 0;
}
