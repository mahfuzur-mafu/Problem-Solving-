#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        if(str=="Tetrahedron")
        {
            count=count+4;
        }
        else if(str=="Cube")
        {
            count=count+6;
        }
        else if(str=="Octahedron")
        {
            count=count+8;
        }
        else if(str=="Dodecahedron")
        {
            count=count+12;
        }
        else if(str=="Icosahedron")
        {
            count=count+20;
        }
    }
    cout<<count<<endl;
    return 0;
}
