#include <stdio.h>

int main() {

     int i,n,t,x,p=0,y=0;
    scanf("%d",&n);
    while(n!=0)
    {

          n--;
        scanf("%d",&x);

    for(i=1;i<=x;i++){

        if(x%i==0)
    {
        p++;
    }
    }


    if(p==2)
    {
        printf("%d eh primo\n",x);
    }
    else
    {
        printf("%d nao eh primo\n",x);
    }



     x=0,p=0;
    }

    return 0;
}
