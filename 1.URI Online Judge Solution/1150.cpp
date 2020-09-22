#include <iostream>

using namespace std;

int main() {


    int a,b,n,z,x=0;
    cin>>n;
    do{
      cin>>z;
    }
    while(n>=z);
    for(a=n,b=0; b<z; a++)
    {
        b+=a;
        x++;
    }
    cout<<x<<endl;

    return 0;
}
