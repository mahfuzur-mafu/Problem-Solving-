#include<iostream>
#include<string.h>

#define MAX 10000

using namespace std;

int main()
{
    char n[MAX];
    gets(n);

    if(n[0]>='a' && n[0]<='z')
    {
        n[0]='A'+(n[0]-'a');
    }

    puts(n);
    return 0;
}
