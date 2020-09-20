#include<iostream>

using namespace std;

int a[10000001];
int b[10000000/2];
int I=0;

int main()
{
    a[0]=1;
    a[1]=1;
    for(int i=4;i<=10000000;i+=2)
    {
        a[i]=1;
    }
    for(int i=3;i*i<=10000000;i++)
    {
        if(a[i])
            continue;
        for(int j=i*i;j<=10000000;j+=i)
        {
            a[j]=i;
        }
    }
    for(int i=2;i<=10000000;i++)
    {
        if(!a[i])
        {
            b[I++]=i;
        }
    }
    int n;
    cin>>n;
    cout<<b[n-1];
    return 0;
}
