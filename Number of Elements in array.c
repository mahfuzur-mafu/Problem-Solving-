#include <stdio.h>
int main()
{
    int arr[100], freq[100];
    int sz, i, j, cnt;
    scanf("%d", &sz);

    for(i=0; i<sz; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -2;
    }

    for(i=0; i<sz; i++)
    {
        cnt = 1;
        for(j=i+1; j<sz; j++){
            if(arr[i]==arr[j])
            {
                cnt++;


                freq[j] = 0;
            }
        }


        if(freq[i] != 0)
        {
            freq[i] = cnt;
        }


    }
    for(i=0; i<sz; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }
    return 0;
}

