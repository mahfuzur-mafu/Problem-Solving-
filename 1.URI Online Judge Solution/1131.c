#include<stdio.h>
int main()
{
    int n,c=0,in=0,gr=0,dw=0;
    while(1)
    {
        c++;
        int n,m;
        scanf("%d %d",&n,&m);
        if(n>m)
            in++;
        else if(n<m)
            gr++;
        else
            dw++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&n);
        if(n==1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    printf("%d grenais\n",c);
    printf("Inter:%d\n",in);
    printf("Gremio:%d\n",gr);
    printf("Empates:%d\n",dw);
    if(in>gr)
    {
        printf("Inter venceu mais\n");
    }
    else if(in<gr)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Não houve vencedor\n");
    }
    return 0;
}
