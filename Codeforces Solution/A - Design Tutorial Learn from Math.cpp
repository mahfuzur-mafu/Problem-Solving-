#include<iostream>

using namespace std;

int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
          cout<<4<<' '<<a-4<<endl;
    }
    else
    {
        cout<<a-9<<' '<<9<<endl;
    }
    return 0;
}
