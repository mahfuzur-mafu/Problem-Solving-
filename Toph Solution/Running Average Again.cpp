#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    double sum=0;
   for(i=1;i<=n;i++)
    {

        cin>>a[i];

        sum=sum+a[i];

        double res;
        res= sum/i;
        cout<<res<<endl;
    }
}

