#include <iostream>
using namespace std;
int main()

{
     int n,i,a,b,s,temp;
    cin>>n;

    for(i=1;i<=n;i++)
    {
       cin>>a>>b;

        if(a<b)
        {
        temp=a;
        a=b;
        b=temp;
        }
        while(a%b!=0)
        {
            s=a;
            a=b;
            b=s%a;
        }
      cout<<b<<endl;
    }
    return 0;
}
