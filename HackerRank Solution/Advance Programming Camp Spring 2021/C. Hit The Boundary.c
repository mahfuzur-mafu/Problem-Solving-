
#include <stdio.h>
int main()
{
    int n;
    int over,run=0;
    scanf("%d",&n);
    over = n%6;
    run = (n/6)*33;
    run = run+(over*6);

    if(over == 0)
    {
        run = run+3;
    }
    printf("%d\n",run);
}
