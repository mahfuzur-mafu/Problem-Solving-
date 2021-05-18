#include<stdio.h>
#include<string.h>
int main()
{
    char str[100001],pre;
    int n,i;

    scanf("%d",&n);
    while(n--)
    {

        int count = 0;
        scanf("%s",str);
        int len = strlen(str);
        pre = str[0];

        if(pre == '1')
        {
            count++;
        }

        for(i=1; i<len; i++)
        {

            if(pre == str[i])
            {
                continue;
            }

            else
            {
                pre = str[i];
                if(pre =='1')
                {
                    count++;
                }
            }
        }

        if(count==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
