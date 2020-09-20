#include<iostream>
using namespace std;
main()
{
    int a,b,coun=0;
    cin>>a>>b;
    {
        while(a<=b)
        {
          a=a*3;
          b=b*2;
          coun++;
        }

    }
    cout<<coun<<endl;
    return 0;
}
