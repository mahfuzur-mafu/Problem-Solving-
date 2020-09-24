#include <stdio.h>

int main() {

    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        if(x==y)
            printf("%d\n",x);
        else if(x>y)
            printf("%d\n",x);
        else if(x<y)
            printf("%d\n",y);
    }

    return 0;
}
