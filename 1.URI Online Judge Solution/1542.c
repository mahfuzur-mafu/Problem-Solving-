#include <stdio.h>
int main()
{
    int a,b,c,res;
    while((scanf("%d",&a))&&a!=0)
    {
        scanf("%d %d",&b,&c);
        res=(a*b*c)/(c-a);
        if(res>1)
        {
            printf("%d paginas\n",res);
        }
        else
        {
             printf("%d pagina\n",res);
        }

    }
    return 0;
}
