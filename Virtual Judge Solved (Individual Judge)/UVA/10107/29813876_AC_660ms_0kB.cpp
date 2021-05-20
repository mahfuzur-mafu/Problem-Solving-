#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10000];
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        arr[i++] = n;
        sort(arr,arr+i);
        if(i%2 == 1)
        {
            printf("%d\n", arr[i/2]);

        }
        else
            printf("%d\n",(arr[i/2-1]+arr[i/2])/2 );
    }
   
}