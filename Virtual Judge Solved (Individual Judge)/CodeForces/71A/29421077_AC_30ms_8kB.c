#include<stdio.h>
#include<string.h>
int main()
{

    char str[100];
    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",str);
        int len=strlen(str);

        if(len>10)
        {
            printf("%c%d%c\n",str[0],len-2,str[len-1]);
        }
        else
        {
            printf("%s\n",str);
        }
    }
}
