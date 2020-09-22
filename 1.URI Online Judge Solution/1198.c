#include <stdio.h>

int main() {

  long long int x,y,z;
    while(scanf("%lld %lld",&x,&y)!=EOF)
    {
        if(x>=y)
        {
            z=x-y;
        }
        else
        {
            z=y-x;
        }
        printf("%lld\n",z);
    }

    return 0;
}
