#include <bits/stdc++.h>
int main()
{
    char name;
    double salary,value,total;
    scanf("%s",&name);
    scanf("%lf",&salary);
    scanf("%lf",&value);
    total=salary+(value*.15);
    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}

