#include <stdio.h>
int main ()
{

    int n,a,b,c,d,e,i;
    while(scanf("%d", &n) && n > 0)
        for(i=1; i<=n; i++)
        {
            scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
            if(a<=127)
                if(b<=127||c<=127||d<=127||e<=127)
                {
                    printf("*\n");
                }
                else
                {
                    printf("A\n");
                }
            else if(b<=127)
                if(c<=127||d<=127||e<=127)
                {
                    printf("*\n");
                }
                else
                {
                    printf("B\n");
                }
            else if(c<=127)
                if(d<=127||e<=127)
                {
                    printf("*\n");
                }
                else
                {
                    printf("C\n");
                }
            else if(d<=127)
                if(e<=127)
                {
                    printf("*\n");
                }
                else
                {
                    printf("D\n");
                }
            else if(e<=127)
            {
                printf("E\n");
            }
            else
            {
                printf("*\n");
            }
        }
    return 0;
}


