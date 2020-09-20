#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the factorial function below.
void factorial() {
      int n;
    int i;
    int sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     sum=sum*i;

    }
    printf("%d",sum);

}

int main()
{
  factorial();
  return 0;
}

