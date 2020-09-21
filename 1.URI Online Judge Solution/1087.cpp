#include<bits/stdc++.h>
int main()
{
    int a,c,b,d;

    while(1)
    {
        scanf("%d %d %d %d",&a,&c,&b,&d);
        if(a == 0 && c == 0 && b == 0 && d == 0)
        {
            break;
        }

        if(a == b && c == d)
        {
            printf("0\n");
        }


        else if((b-a) == -(d-c) || -(b-a) == -(d-c)
                ||-(b-a) == (d-c) || (b-a) == (d-c))

        {
            printf("1\n");
        }
        else if(a == b || c == d)
        {
            printf("1\n");
        }


        else

        {
            printf("2\n");
        }
    }
    return 0;
}
