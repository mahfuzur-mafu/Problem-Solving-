#include <bits/stdc++.h>
#include <string.h>


int main()
{

    int a,b,i;
    char* str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a,&b);
    for(i=a;i<=b;i++)
    {

        if(i>9)
        {
            if(i%2==0)
            {
                printf("even\n");

            }
            else
            {
                printf("odd\n");
            }
        }
        else
        {
            printf("%s\n", str[i]);
        }
    }
    return 0;
}

