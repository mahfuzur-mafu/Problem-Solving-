#include <stdio.h>
main()
{
    int s,v1,v2,t1,t2,num1,num2;
    scanf("%d%d%d%d%d",&s,&v1,&v2,&t1,&t2);
    num1=(s*v1)+(2*t1);
    num2=(s*v2)+(2*t2);
    if(num1<num2)
    {
        printf("First");
    }
    else if(num1>num2)
    {
        printf("Second");
    }
    else if(num1=num1)
    {
        printf("Friendship");
    }
}
