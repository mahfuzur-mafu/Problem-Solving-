#include <stdio.h>

int main() {

 int N,X,Y,i,b,count=0;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%d%d",&X,&Y);
        if(X==Y)
        {
            count=0;
            printf("%d\n",count);
        }
        else if(X<Y)
        {
            for(b=X+1,count=0; b<Y; b++)
            {
                if(b%2==1||b%2==-1)
                    count=count+b;
            }
            printf("%d\n",count);
        }
        else
        {
            for(b=Y+1,count=0; b<X; b++)
            {
                if(b%2==1||b%2==-1)
                    count=count+b;
            }
            printf("%d\n",count);
        }
    }

    return 0;
}

