#include<bits/stdc++.h>
#include<string.h>
int led(char str[]);
int main()
{
    int n;
    scanf("%d ",&n);
    while(n--)
    {
        int p;
        char s[500];
        gets(s);
        p=led(s);
        printf("%d leds\n",p);
    }
    return 0;
}
int led(char str[])
{
    int i, sum=0;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='1')
            sum+=2;
        else if(str[i]=='2')
            sum+=5;
        else if(str[i]=='3')
            sum+=5;
        else if(str[i]=='4')
            sum+=4;
        else if(str[i]=='5')
            sum+=5;
        else if(str[i]=='6')
            sum+=6;
        else if(str[i]=='7')
            sum+=3;
        else if(str[i]=='8')
            sum+=7;
        else if(str[i]=='9')
            sum+=6;
        else if(str[i]=='0')
            sum+=6;
    }
    return sum;
}
