#include<iostream>
using namespace std;
int main()
{

    int test,i;
    cin>>test;
    int c=0,ci=0;
   for(i=0;i<test;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            c++;

        }
        else if(a<b)
        {
            ci++;
        }


    }
    if(c>ci)
    {
        cout<<"Mishka"<<endl;
    }
    else if(c<ci)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
