#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,c,d,tk,x,y,book1,book2,i,j;
    int swap;
    while(scanf("%d",&n)!=EOF)
    {
        int array[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&array[i]);
        }
        sort(array,array+n);
        scanf("%d",&tk);

        for( i=0; i<n; i++)
        {
            for( j=i; j<n; j++)
            {
                x = array[i];
                y = array[j];
                if(x+y==tk)
                {
                    book1=x;
                    book2=y;
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",book1,book2);
    }
}

