#include<stdio.h>
#include<string.h>


int main()
{
    char n[100];
    int i=0;
    gets(n);
    int c=0;

    int len=0;
    while(n[len]!='\0')
        len++;
    for (i=0; i<len-6; i++)
    {
        if (n[i]=='0' && n[i+1]=='0' && n[i+2]=='0' && n[i+3]=='0' && n[i+4]=='0' && n[i+5]=='0' && n[i+6]=='0')
        {
            c=7;
            break;
        }
        if (n[i]=='1' && n[i+1]=='1' && n[i+2]=='1' && n[i+3]=='1' && n[i+4]=='1' && n[i+5]=='1' && n[i+6]=='1')
        {
            c=7;
            break;
        }
    }
    if(c==7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
