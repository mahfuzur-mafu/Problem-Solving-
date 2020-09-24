#include <stdio.h>
int main()
{
    int n,m,i;
    char str[1000];
    scanf("%d", &n);
    for( i=1; i<=n; i++)
    {
        scanf("%s",str);
        scanf("%d",&m);
        if(str[0]=='T' && str[1]=='h' && str[2]=='o' && str[3]=='r')
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}

