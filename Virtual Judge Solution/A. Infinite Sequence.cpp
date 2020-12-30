#include <iostream>

using namespace std;
int main()
{
    long long int n,a=1;
    scanf("%lld",&n);
    while(a)
    {
        if(a*(a+1)/2>=n)
        {
            break;
        }
        a++;
    }
    printf("%lld\n",n-a*(a-1)/2);
    return 0;
}
