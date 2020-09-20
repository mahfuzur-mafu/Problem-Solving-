#include<stdio.h>
int main(){

int n,i;
int res=0;
 int a[100];
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a[i]);
    {
        if(a[i]>res)
        {
            res=a[i];
        }
    }
}
printf("%d",res);


}
