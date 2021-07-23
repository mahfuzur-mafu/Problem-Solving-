#include <iostream>

using namespace std;

int main() {
	int X, Y;
	cin >> X >> Y;
	    int t=Y;
    while(1)
    {
        if(Y%X==0)
        {
            break;
        }
        Y++;
    }

    cout<<Y-t<<endl;
}


