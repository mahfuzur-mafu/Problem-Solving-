#include <stdio.h>
int main()
{
  int arr[10000];
  int freq[10000];

    int n,i,j;
    int count,swap;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for(i = 0 ; i < n - 1 ; i++)
    {
        for(j = 0 ; j < n-1-i ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }



    for(i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }
}


