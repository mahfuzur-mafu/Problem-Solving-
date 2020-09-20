#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
       int i,j;
    scanf("%d%d",&a,&b);
    char m[a+4][b+4];
    for(int i=0; i<=a+1; i++)
    {
        for( j=0; j<=b+1; j++)
            m[i][j] = '.';
    }
    for( i=1; i<=a; i++)
    {
        for( j=1; j<=b; j++)
            scanf(" %c",&m[i][j]);
    }
    int res;

    for(i=1; i<=a; i++)
    {
        for(j=1; j<=b; j++)
        {
            res =0;
            if(m[i][j] == '.')
            {
                if(m[i][j-1] == '*')
                    res++;
                if(m[i-1][j-1]=='*')
                    res++;
                if(m[i-1][j]=='*')
                    res++;
                if(m[i-1][j+1]=='*')
                    res++;
                if(m[i][j+1]=='*')
                    res++;
                if(m[i+1][j+1]=='*')
                    res++;
                if(m[i+1][j]=='*')
                    res++;
                if(m[i+1][j-1]=='*')
                    res++;
                if(res>0)
                    m[i][j] = '0' + res;
            }
        }
    }


    for(i=1; i<=a; i++)
    {
        for(j=1; j<=b; j++)
            cout<<m[i][j];
        cout<<endl;
    }
    return 0;
}


