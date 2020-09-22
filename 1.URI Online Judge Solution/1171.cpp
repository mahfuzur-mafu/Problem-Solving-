#include<iostream>
using namespace std;
int main()
{
    int i,n,x,counter[20001];
     cin>>n;
    for(i=0; i<=2000; i++)
    {
        counter[i]=0;
    }
    for(i=0; i<n; i++)
    {
        cin>>x;
        counter[x]++;
    }
    for(i=0; i<=2000; i++)
    {
        if(counter[i]>0)
         cout<<i<<" aparece "<<counter[i]<<" vez(es)"<<endl;
    }
    return 0;
}

