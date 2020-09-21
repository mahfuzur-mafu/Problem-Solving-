#include <iostream>
using namespace std;
int main()
{
    int h1,h2,m1,m2;
    int al,pt;
    while(1)
    {
      cin>>h1>>m1>>h2>>m2;
        if(h1==0 && m1==0 && m2==0 && h2==0)
        {
            break;
        }
        pt=(h1*60)+m1;
        al=(h2*60)+m2;

        if(al<pt)
        {
            al=al+(24*60);
        }
      cout<<al-pt<<endl;
    }


    return 0;
}

