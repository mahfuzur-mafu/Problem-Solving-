#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char data)
{
    if(top>=MAX-1)
    {
        printf("No Space");
        return;
    }
    top++;
    stack[top]=data;
}

char pop()
{
    if(top==-1)
    {
        printf("emptySpace \n");
    }
    return stack[top--];
}

void stackdisplay()
{
    int i;
    for(i=top; i>=0; i--)
    {
        printf("%c",stack[i]);
    }

}

int main()
{
    int i,j;
    char str[MAX];

    for(i=0; i<2; i++)
    {
        top=-1;
        printf("\nTest Case: 0%d\n",i+1);


        printf("Enter string : ");
        gets(str);

        for(j=0; j<strlen(str); j++)
        {
            push(str[j]);
        }

        for(j=0; j<strlen(str); j++)
        {
            printf("%c",pop());
        }

    }
    return 0;
}
