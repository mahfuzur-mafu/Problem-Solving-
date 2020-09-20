#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    float a[1000];
    float sum=0;
   for(i=1;i<=n;i++)
    {

        cin>>a[i];

        sum=sum+a[i];

        float res;
        res= sum/i;
        cout<<res<<endl;
    }
}

