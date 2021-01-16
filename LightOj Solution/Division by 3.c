#include<stdio.h>
int div(int n)
 {
     if(n==1||n==0)
         return 0;
     return n-1-(n-1)/3;
 }
 int main()
 {
     int a,b,i,t;
     scanf("%d",&t);
     for(i=1;i<=t;i++)
     {
         scanf("%d%d",&a,&b);
         printf("Case %d: %d\n",i,div(b)-div(a-1));
     }
     return 0;
 }
