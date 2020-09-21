#include <stdio.h>

int main() {

 int i,n,c,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=i*i;
        c=i*i*i;
         printf("%d %d %d\n",i,x,c);

    }

    return 0;
}
