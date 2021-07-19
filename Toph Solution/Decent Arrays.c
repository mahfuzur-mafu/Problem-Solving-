#include <stdio.h>
int main() {
	int n,i;
	int flag=0;
    scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		{
		  scanf("%d",&arr[i]);
		}
	for(i=0;i<n-1;i++)
		{
		if(arr[i]>arr[i+1])
		   {
			   flag=1;
			   break;
		}
			}
	if(flag==1)
	{
		printf("No\n");
	}
	else
		printf("Yes\n");

	return 0;
}

