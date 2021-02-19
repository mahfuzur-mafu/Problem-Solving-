#include <stdio.h>
int main()
{

    int n;
    long long int  array[100];
    int i,c,d,swap;
    int minvalue,loop,j;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &array[i]);
    }

    for(loop = 0 ; loop < n-1 ; loop++)
    {
        minvalue = loop;
        for(j = loop + 1 ; j < n ; j++)
        {
            if(array[minvalue] > array[j])
            {
                minvalue = j;
            }
        }
        if(minvalue != loop)
        {
            swap = array[loop];
            array[loop] = array[minvalue];
            array[minvalue] = swap;
        }
    }

    long long int  prb=1;
    for(i=0; i< n; i++)
    {
        if(array[i]>=prb)
        {
            prb++;
        }
    }
    printf("%lld\n",prb-1);

}
