#include<stdio.h>
int main()
{
    int n,m,c=0,r=0,s=0;
    float x,y,z;
    char cr;
    scanf("%d",&n);
    while(n--){
        scanf("%d %c",&m,&cr);
        if(cr=='c'||cr=='C')
            c+=m;
        else if(cr=='r'||cr=='R')
        r+=m;
        else if(cr=='s'||cr=='S')
         s+=m;
    }
    float total=c+r+s;

    printf("Total: %.f cobaias\n",total);
    x=((c*100)/total);
    y=((r*100)/total);
    z=((s*100)/total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",x);
    printf("Percentual de ratos: %.2f %%\n",y);
    printf("Percentual de sapos: %.2f %%\n",z);

return 0;
}
