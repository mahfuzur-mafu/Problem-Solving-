#include<iostream>
using namespace std;
int main()
{
    int a,b,c,res;
    while(cin>>a && a!=0)
    {
        cin>>b>>c;
        res=(a*b*c)/(c-a);
        if(res>1)
        {
            cout<<res<<" paginas"<<endl;
        }
        else
        {
            cout <<res<<" pagina"<<endl;
        }
    }

    return 0;
}

