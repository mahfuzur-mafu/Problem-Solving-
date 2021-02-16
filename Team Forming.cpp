#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int sum=0;
    scanf("%d",&n);
    int arr[1000];
    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    sort (arr,arr+n);


    for (int i=1; i<n; i+=2)
    {
        sum =sum+ arr[i]-arr[i-1];
    }

    printf("%d\n",sum);
}
