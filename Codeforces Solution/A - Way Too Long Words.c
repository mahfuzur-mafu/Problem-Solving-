#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--){

        char str[101];
        scanf("%s",str);

        int n=1;
        while(str[n]!='\0')n++;

        int p = n-1;

        if(p<10){
            printf("%s\n",str);
        }
        else{
            printf("%c%d%c\n",str[0],p-1,str[p]);
        }
    }
    return 0;
}
