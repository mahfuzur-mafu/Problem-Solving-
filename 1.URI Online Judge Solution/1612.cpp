#include <iostream>
using namespace std;

int main()
{
     int a,b;
     cin>>a;
    while (a--)
    {
       cin>>b;
        if(b==1)
        {
            cout<<b<<endl;
        }
        else if(b%2==0)
        {
            cout<<b/2<<endl;
        }
        else
        {
               cout<<(b/2)+1<<endl;
        }

    }
    return 0;
}
