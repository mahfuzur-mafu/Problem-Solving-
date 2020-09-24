#include<stdio.h>

int main()
{
    int m,x,y,i,j,tmp,c;
    int a[10];

    scanf("%d",&m);

    while(m--)
    {
        scanf("%d %d",&x,&y);
        c=0;
        tmp=0;

        for(i=0; i<x; i++)
        {
            scanf("%d",&tmp);

            if(y>tmp)
            {
                a[i] =y-tmp;
            }
            else
            {
                a[i] = tmp-y;
            }
        }

        tmp= a[0];

        for(j=0; j<x; j++)
        {

            if(a[j]==0)
            {
                c=j;
                break;
            }
            else if( tmp > a[j] )
            {
                tmp=a[j];
                c=j;
            }
        }

        printf("%d\n",c+1);

    }

    return 0;
}

