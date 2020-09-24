#include <stdio.h>

int main() {

   int R1,R2,T,R,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&R1);
        scanf("%d",&R2);
        R=R1+R2;
        printf("%d\n",R);
    }

    return 0;
}
