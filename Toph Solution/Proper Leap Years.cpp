#include<bits/stdc++.h>

int main()
{
int year;
scanf("%d", &year);
if(year%400==0)
    printf("Yes");
else if(year%100==0)
    printf("No");
else if(year%4==0)
    printf("Yes");
else
    printf("No");

}
