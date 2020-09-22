#include <iostream>
using namespace std;
int main()
{
    int n,i=0;
    int a,c;
    char b;

   cin>>n;

   while(i<n)
    {
        cin>>a>>b>>c;
        i++;

        if(a==c)
       cout<<a*c<<endl;
        else if(b >=65 && b<= 90)
       cout<<c-a<<endl;
        else
        cout<<c+a<<endl;
    }
    return 0;
}
