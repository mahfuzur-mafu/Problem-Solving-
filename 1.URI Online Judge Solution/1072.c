#include <stdio.h>

int main() {

       int a,n,x,out=0,in=0;
    scanf("%d",&n);
    for(a=1; a<=n; a++)
    {
        scanf("%d",&x);
        if(x>=10 && x<=20)
        {
            ++in;
        }
        else
        {
            ++out;
        }

    }
    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;
}
