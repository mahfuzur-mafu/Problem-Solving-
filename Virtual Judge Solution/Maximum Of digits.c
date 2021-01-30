#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[10]={4,7,47,74,447,474,477,774,747,744},cnt=0;
    scanf("%d",&n);
    for(i=0;i<10;i++){
    if(n==a[i]||n%a[i]==0){
        printf("YES\n");
        break;
    }
    else cnt++;
    }
    if(cnt==10) printf("NO\n");
    return 0;
}
