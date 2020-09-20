#include<iostream>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    int count=0;
    while(a--)
    {
        cin>>c;
        if(c<=b)
      {
            count=count+1;
      }
        else
     {
            count=count+2;
     }
    }
    cout<<count<<endl;
    return 0;
}
