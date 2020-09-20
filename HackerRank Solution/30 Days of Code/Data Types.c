#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int i1;
    double d1;
    char arr[1000];
    scanf("%d%lf",&i1,&d1);
    scanf("%*[\n]%[^\n]",arr);
    printf("%d",i+i1);
    printf("\n%.1lf",d+d1);
    printf("\n%s%s",s,arr);






    return 0;
}
