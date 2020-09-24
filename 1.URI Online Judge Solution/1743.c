#include<stdio.h>
int main()
{
    int A,a,B,b,C,c,D,d,E,e;
    scanf("%d %d %d %d %d", &A,&B,&C,&D,&E);
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);

    if(A==a || B==b || C==c || D==d || E==e)
    {
        printf("N\n");
    }
    else
    {
        printf("Y\n");
    }
    return 0;
}

