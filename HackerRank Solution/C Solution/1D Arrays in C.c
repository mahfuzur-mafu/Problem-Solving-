#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int arr[1000];
     int n,i;
     int sum=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
         sum+=arr[i];
     }
    printf("%d\n",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

